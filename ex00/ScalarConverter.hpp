#pragma once
#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
# include <iostream>
# include <stdlib.h>
# define RST "\033[0m"    /* Reset to default color */
# define BOLD "\033[1m"   /* Bold */
# define R "\033[1;31m" /* Red */

class ScalarConverter
{
private:
	std::string data;
public:
	ScalarConverter(std::string data);
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter& other);
	~ScalarConverter();

	static void convert(const std::string value);
};

ScalarConverter::ScalarConverter(std::string data)
{
	this->data = data;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	if (this != &other)
		this->data = other.data;
	return *this;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called.\n";
}

void ScalarConverter::convert(const std::string value)
{
	int value_int = atoi(value);
	
	std::cout << "Int: " << value_int;
	// std::cout << "Char: " << value_int;
	// std::cout << "Float: " << value_int;
	// std::cout << "Double: " << value_int;
}

# endif