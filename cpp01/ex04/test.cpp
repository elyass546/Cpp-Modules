#include <iostream>
#include <fstream>

int main(){
	std::string s = "ilias";
	std::string f = "";
  std::string str = "alskdjf ljlaksjdf lasdkjf lkasjddfl iliassdf kjasdflk jaslk j";
  unsigned long i = str.find(s, 0);

  if (i != std::string::npos)
    f = str.substr(i, s.length());
  std::cout << f << std::endl;
  return 0;
}