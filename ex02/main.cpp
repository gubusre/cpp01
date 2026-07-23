#include <iostream>
#include <string>

int main ()
{
	std::string string_variable = "HI THIS IS BRAIN";
	std::string* stringPTR = &string_variable;
	std::string& stringREF = string_variable;

	std::cout << &string_variable << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << string_variable << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}