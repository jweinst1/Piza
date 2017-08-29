#include "Piza.h"
#include <iostream>


// An executable that tests the string

int main(int argc, char const *argv[])
{
	Piza testStr("foo");
	testStr += 'h';
	std::cout << testStr.begin() << std::endl;
	return 0;
}