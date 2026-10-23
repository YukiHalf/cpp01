#include <string.h>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPTR = &str;
	std::string& strREF = str;

	std::cout<< "str: " << &str << std::endl;
	std::cout<< "strPTR: " << &strPTR << std::endl;
	std::cout <<"strREF: "<< strREF<< std::endl;
}