#include "Piza.h"

Piza::Piza(): _cap(PIZA_SIZE_START), _len(0), _str(allocate(PIZA_SIZE_START)), _mark(_str)
{

}

Piza::Piza(const char* cstr)
{
	std::size_t _len = std::strlen(cstr);
	_cap = PIZA_SIZE_START;
	_str = allocate(PIZA_SIZE_START);
	_mark = _str + _len;
	if(_len > _cap) rellocate();
	std::strcpy(_str, cstr);
}

void Piza::operator += (const char ch)
{
	if(_mark == _str + _cap) rellocate();
	*_mark = ch;
	//increments both mark and length;
	_mark++;
	_len++;
}