#include "ScalarConverter.hpp"

int main(int argc, char* argv[])
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
	}
	else
		std::cout << "Invalid data.\n";
	return (0);
}