#include <iostream>
#include "Data.hpp"
#include <stdint.h>

class Serializer
{
// private:
public:
	Serializer();
	Serializer(const Serializer& other);
	virtual Serializer& operator=(const Serializer& other) = 0;
	~Serializer();

	static uintptr_t serialize(Data* ptr); // takes a pointer and converts in unsigned integer uintptr_t
	static Data* deserialize(uintptr_t raw); // takes unsigned int parameter and converts it in a pointer to Data
};

