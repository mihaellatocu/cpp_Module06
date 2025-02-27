#include "ScalarConverter.hpp"

bool	isChar(const std::string& str)
{
	if (str.length() == 1 && std::isprint(str[0]))
		return true;
	return false;
}

bool isInt(const std::string& str)
{
	char* end; // declar pointer de tip char*
	std::strtol(str.c_str(), &end, 10); // &end = adresa pointerului care indica primul caracter neconvertibil
	return (*end == '\0');
}

bool isFloat(const std::string& str)
{
	char* end;
	std::strtof(str.c_str(), &end);
	return (*end == 'f');
}

bool isDouble(const std::string& str)
{
	char* end;
	std::strtod(str.c_str(), &end);
	return (*end == '\0');
}

void	printResult(char c, long i, float f, double d)
{	  
	if (std::isnan(f) || f == std::numeric_limits<float>::infinity() ||
			f == -std::numeric_limits<float>::infinity())
				std::cout << "char: impossible" << std::endl;
	else if (!isprint(c) || c == 0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if (i > INT_MAX || i < INT_MIN)
		std::cout << "int: out of range " << std::endl;
	else if (std::isnan(f) || f == std::numeric_limits<float>::infinity()
			|| f == -std::numeric_limits<float>::infinity())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << 'f' <<  std::endl;
	if (d > std::numeric_limits<float>::max() || d < -std::numeric_limits<float>::max())
		std::cout << "double: out of range" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	printSpecial(const std::string& str)
{
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl; 
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

// std::cout << "DEBUG: char = " << static_cast<int>(c) << std::endl;
// std::cout << "DEBUG: isprint(c) = " << std::isprint(c) << std::endl;
// std::cout << "DEBUG: std::isnan(f) = " << std::isnan(f) << std::endl;
// std::cout << "DEBUG: std::numeric_limits<float>::infinity() = " 
// 	  << std::numeric_limits<float>::infinity() << std::endl;