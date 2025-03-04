#include "Serializer.hpp"

int main()
{
	Data data = {42, "Hello"};

	//Serialize
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialize value: " << raw << std::endl;

	//Deserializer
	Data *ptr = Serializer::deserialize(raw);
	std::cout << "Deserialized Data: " << ptr->number <<", " << ptr->text << std::endl;

	if (ptr == &data)
		std::cout <<"Serialization and deserialization successfull!"<< std::endl;
	else
		std::cout << "Error in serialization/deserialization!" << std::endl;
	return(0);
}