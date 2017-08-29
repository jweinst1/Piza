#ifndef PIZA_HEADER
#define PIZA_HEADER

#include <cstdlib>
#include <cstring>
#include <string>

//starting size for Piza String
#define PIZA_SIZE_START 500

//Main Piza Header

class Piza
{
private:
	char* _str;
	std::size_t _len;
	std::size_t _cap;
//allocator functions
	char* allocate(int amount)
	{
		return static_cast<char*>(std::malloc(sizeof(char) * amount));
	}

	inline void reallocate()
	{
		_cap *= _cap;
		_str = static_cast<char*>(std::realloc(static_cast<void*>(_str), _cap));
	}
public:
	//constructors
	Piza();
	Piza(const char* cstr);
	Piza(const std::string& cppstr);

	//starts the string with a specific starting size of allocated data
	Piza(std::size_t startSize);

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