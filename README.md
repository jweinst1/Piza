# Piza

*A C++ string specialized for appending*

`Piza` is a string class that is specialized for appending chars to a string, and allocates new memory in much larger chunks than normal. 
This allows for less frequent calls to `malloc` and faster performance

## Example

```
int main(int argc, char const *argv[])
{
	Piza testStr("foo");
	testStr += 'h';
	std::cout << testStr.begin() << std::endl;
	return 0;
}
```	