#ifndef PIZA_HEADER
#define PIZA_HEADER

#include <cstdlib>
#include <string>

//Main Piza Header

class Piza
{
private:
	char* _str;
	std::size_t _len;
public:
	//constructors
	Piza();
	Piza(const char* cstr);
	Piza(const std::string& cppstr);

	//iterative methods
	char* begin()
	{
		return _str;
	}

	char* end()
	{
		return _str + _len;
	}
};

#endif