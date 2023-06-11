#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fcntl.h>
#include <fstream>
#include <cctype>
#include <sstream>
#include <map>
#include <string>
#include <unistd.h>


typedef std::string string;
typedef std::map<string, string> mapstring;

class BitCoinExchange {
	private:
		mapstring	map;
	public:
		// Canonical Form
		BitCoinExchange( string const & );
		BitCoinExchange( void );
		~BitCoinExchange( void );
		BitCoinExchange( BitCoinExchange const& );
		BitCoinExchange& operator=( BitCoinExchange const& );
		// Other Methods
		void	FillData( void );
		string	GetElement( string );
		float	StringToFloat( string );
		int		CheckDateIfValid( string const& );
		int		CheckValueIfValid( string );
		void	SearchForBtcValue( string, string );
		void	GetValueFromDate( string, string );
};

// Display Error message !
int	ft_error(const std::string & str);
#endif