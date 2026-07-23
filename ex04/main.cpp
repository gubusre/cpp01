#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
    	std::cerr << "Usage: ./program <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream input(filename.c_str());
	std::ofstream output((filename + ".replace").c_str());
	if (!input.is_open())
	{
		std::cerr << "Error open file" << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(input, line))
	{
	    std::string result;
	    size_t pos;
   		while ((pos = line.find(s1)) != std::string::npos) 
    	{
    	    result += line.substr(0, pos);
        	result += s2;
        	line = line.substr(pos + s1.length());
    	}
    	result += line;
 	   output << result << std::endl;
	return 0;
}