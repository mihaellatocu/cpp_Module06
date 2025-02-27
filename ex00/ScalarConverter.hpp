#pragma once
#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
# include <iostream>
# include <stdlib.h>
# include <string>
# include <iomanip>
# include <stdbool.h>
# include <climits> // pt int
# include <limits> // pt floats
# include <cfloat>
# include <cmath>

# define RST "\033[0m"    /* Reset to default color */
# define B "\033[1m"   /* Bold */
# define R "\033[1;31m" /* Red */

class ScalarConverter
{
private: // mai am nev sa fie?
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	virtual ScalarConverter& operator=(const ScalarConverter& other) = 0;
	~ScalarConverter();

	static void convert(const std::string& value);
};

bool	isChar(const std::string& str);
bool	isInt(const std::string& str);
bool	isFloat(const std::string& str);
bool	isDouble(const std::string& str);
void	printResult(char c, long i, float f, double d);
void	printSpecial(const std::string& str);

# endif