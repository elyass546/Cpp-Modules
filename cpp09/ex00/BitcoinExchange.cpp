#include "BitcoinExchange.hpp"

BitCoinExchange::BitCoinExchange( void ) {}

void	BitCoinExchange::FillData( void ) {
	std::ifstream DataBase("./data.csv");

    string header;
    std::getline(DataBase, header); // Read the header line

    string line;
    while (std::getline(DataBase, line)) {

        std::istringstream lineStream(line);
        string date, value;
		
        std::getline(lineStream, date, ','); // Parse the data
        std::getline(lineStream, value);

        map[date] = value;
    }
    DataBase.close();
}

int		CheckMonthDays(int Month) {
	if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)
		return (1);
	else if (Month == 4 || Month == 6 || Month == 9 || Month == 11)
		return (2);
	return (0);
}

void	BitCoinExchange::SearchForBtcValue( string date, string value ) {
	
	std::cout << date << " => " << value << " = " << StringToFloat(value) * StringToFloat(GetElement(date)) << std::endl;
	return ;

}

int	BitCoinExchange::CheckDateIfValid( string const& date ) {
	//Year-Month-Day
	string	line;
	int		counter = 0;
	int		month;
	std::istringstream sss(date);
	size_t First_pos = date.find('-');
	size_t Sec_pos = date.find('-', First_pos + 1);
	if (First_pos == string::npos || Sec_pos == string::npos)
		return(ft_error("Wrong date format in this date \"" + date + "\""));
	while (std::getline(sss, line, '-'))
	{
		if (line.empty())
			return(ft_error("Date must follow this format \"YYYY-MM-DD\" at this line : " + date));
		int d = std::stoi(line);
		if (counter == 0) // Check the Year if valid.
		{
			if ((d < 2009 || d > 2022) || (line.length() != 4))
				return(ft_error("Year not valid at this line : " + date + " \"YYYY-MM-DD\""));
			else
				counter++;
		}
		else if (counter == 1) // Check the Month if valid.
		{
			if ((d < 1 || d > 12) || (line.length() != 2))
				return(ft_error("Month not valid at this line : " + date + " \"YYYY-MM-DD\""));
			else
			{
				month = d;
				counter++;
			}
		}
		else if (counter == 2) // Check the Month Days if valid.
		{
			if ((CheckMonthDays(month) && (d < 1 || d > 31)) || (line.length() != 2))
				return(ft_error("Day not valid at this line : " + date + " \"YYYY-MM-DD\""));
			if (((CheckMonthDays(month) == 2) && (d < 1 || d > 30)) || (line.length() != 2))
				return(ft_error("Day not valid at this line : " + date + " \"YYYY-MM-DD\""));
			if (((CheckMonthDays(month) == 0) && (d < 1 || d > 29)) || (line.length() != 2))
				return(ft_error("Day not valid at this line : " + date + " \"YYYY-MM-DD\""));
			counter = 0;
		}
	}
	return (1);
}

int	BitCoinExchange::CheckValueIfValid( string value ) {
	for (string::iterator it = value.begin(); it != value.end(); it++) {
		if (!isdigit(*it) && (*it) != '.' && (*it) != '-')
		{
			return(ft_error("Wrong input in this line : " + value));
			return (0);
		}
	}
	if (value == "")
	{
		return(ft_error("Value is empty!"));
		return (0);	
	}
	float val = StringToFloat(value); // convert string to float
	if (val < 0.f) { // value lower than 0
		return(ft_error("not a positive number."));
		return (0);
	}
	else if (val > 1000.f) { // value larger than 1000
		return(ft_error("too large a number."));
		return (0);
	}
	return (1);
}

void	BitCoinExchange::GetValueFromDate( string date, string value ) {
		if (CheckDateIfValid(date)) {
			if (CheckValueIfValid(value)) {
				SearchForBtcValue(date, value);
			}
		}
}

float BitCoinExchange::StringToFloat(string str)
{
	std::stringstream ss(str);
	float Num;
	ss >> Num;
	return Num;
}

BitCoinExchange::BitCoinExchange( string const &FileName ) {
	FillData();
	std::ifstream InputFile(FileName);
	string header;
	std::getline(InputFile, header);
	string line;
	while (std::getline(InputFile, line)) {
		string date, value;
		size_t delem = line.find(" | ");
		if (delem == string::npos)
		{
			ft_error("Wrong input in this line : " + line);
			continue ;
		}
		else
		{
			if ((delem >= (line.length() - 1)))
			{
				ft_error("Space not found in this line after pipe: \"" + line + "\"");
				continue ;
			}
			date = line.substr(0, delem);
			value = line.substr(delem + 3);
			GetValueFromDate(date, value);
		}
	}
}

string	BitCoinExchange::GetElement( string key ) {
	if (map.find(key) != map.end())
		return (map[key]);
	mapstring::iterator it = map.lower_bound(key);
	return ((--it)->second);
}

BitCoinExchange::BitCoinExchange( BitCoinExchange const& bit ) {
	*this = bit;
}

BitCoinExchange& BitCoinExchange::operator=( BitCoinExchange const& bit ) {
	map = bit.map;
	return (*this);
}

BitCoinExchange::~BitCoinExchange( void ) {}