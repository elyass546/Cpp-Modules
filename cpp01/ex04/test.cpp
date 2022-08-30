// #include <iostream>
// #include <fstream>

// int main(){
// 	std::string s = "Hello";
// 	std::ofstream Myfile(s);

// 	Myfile << "alsd;fjk";
// 	Myfile << s;
// 	Myfile.close();
// }

#include <iostream>       // std::cout
#include <string>         // std::string

int main ()
{
  std::string str ("There are two needles in this haystack with needles.");
  std::string str2 ("zabi");

  // different member versions of find in the same order as above:
  std::size_t found = str.find(str2);
  if (found!=std::string::npos)
    std::cout << &str[found] << std::endl;
  else if (found==std::string::npos)
	std::cout << "string not found" << std::endl;
//   found=str.find("needles are small",found+1,6);
//   if (found!=std::string::npos)
//     std::cout << "second 'needle' found at: " << found << '\n';

//   found=str.find("haystack");
//   if (found!=std::string::npos)
//     std::cout << "'haystack' also found at: " << found << '\n';
}