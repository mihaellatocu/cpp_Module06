#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{ }

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called.\n";
}

void ScalarConverter::convert(const std::string& str)
{
	if (isInt(str)) 
	{
		//std::cout << B << str << " is an int\n" RST;
		char* end;
		long value = std::strtol(str.c_str(), &end, 10);
		char c = static_cast<char>(value);
		long i = static_cast<long>(value);
		float f = static_cast<float>(value);
		double d = static_cast<double>(value);
		// std::cout << "char: " << c << std::endl;
		// std::cout << "int: " << i << std::endl;
		// std::cout << "float: " << std::fixed << std::setprecision(1) << f << 'f' <<  std::endl;
		// std::cout << "double: " << d << std::endl;
		printResult( c, i, f, d);
		return ;
	}
	else if (isChar(str))
	{
		//std::cout << B << str << " is a char\n" RST;
		char c = static_cast<char>(str[0]);
		int i = static_cast<int>(c);
		float f = static_cast<float>(c);
		double d = static_cast<double>(c);
		// std::cout << "char: '" << c << "'" << std::endl;
		// std::cout << "int: " << i << std::endl;
		// std::cout << "float: " << std::fixed << std::setprecision(1) << f << 'f' <<  std::endl;
		// std::cout << "double: " << d << std::endl;
		printResult( c, i, f, d);
		return ;
	}
	
	else if (isFloat(str)) 
	{
		//std::cout << B << str << " is a float\n" RST;
		char* end;
		long value = std::strtof(str.c_str(), &end);
		char c = static_cast<char>(value);
		int i = static_cast<int>(value);
		float f = static_cast<float>(value);
		double d = static_cast<double>(value);
		// std::cout << "char: '" << c << "'" << std::endl;
		// std::cout << "int: " << i << std::endl;
		// std::cout << "float: " << std::fixed << std::setprecision(1) << f << 'f' <<  std::endl;
		// std::cout << "double: " << d << std::endl;
		printResult( c, i, f, d);
		return ;
	}
	else if (isDouble(str)) 
	{
		//std::cout << B << str << " is a double\n" RST;
		double d = static_cast<double>(std::atof(str.c_str()));
		char c = static_cast<char>(d);
		int i = static_cast<int>(d);
		float f = static_cast<float>(d);
		// std::cout << "char: '" << c << "'" << std::endl;
		// std::cout << "int: " << i << std::endl;
		// std::cout << "float: " << std::fixed << std::setprecision(1) << f << 'f' <<  std::endl;
		// std::cout << "double: " << d << std::endl;
		printResult(c, i, f, d);
		return ;
	}
	else
	{
		std::cout <<B << str << " is unknown type." RST<< std::endl;
	}
}
