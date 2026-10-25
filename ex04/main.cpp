#include <string.h>
#include <iostream>
#include <fstream>

int main(int argc,char **argv)
{
	if(argc != 4)
	{
		std::cout << "Format incomplete/wrong\n./Sed <filename> s1 s2"<<std::endl;
	}else
	{
		std::ifstream file(argv[1]);
		if(!file.is_open())
		{
			std::cerr << "Could not open "<< argv[1] <<std::endl;
			return 1;
		}
		std::string filename = argv[1];
		filename.append(".replace");
		std::ofstream out(filename);
		if(!out)
		{
				std::cerr<<"File couldn't be created"<<std::endl;
				return 1;
		}
		std::string line;
		std::string s1 = argv[2];
		std::string s2  = argv[3];

		while(getline(file,line))
		{
			bool newLine = true;
			if(file.eof())
				newLine = false;
			size_t start_pos;
			start_pos = line.find(s1);
			if(s1 != s2)
			{
				while(start_pos != std::string::npos)
				{
					size_t s1_size,s2_size;
					s1_size = s1.size();
					s2_size = s2.size();
					line.insert(start_pos,s2);
					line.erase(start_pos + s2_size,s1_size);
					start_pos = line.find(s1);
				}
			}
			out << line;
			if(newLine)
				out << "\n";
		}
	}
	return (0);
}
