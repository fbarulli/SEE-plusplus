#include <unistd.h>
#include <stdio.h>

/*
memory display is to be divided by:
1 the hexadecimal address of the first line's characters followed by a  ":"
2 the content in hexa with a space each 2 char
3 content in printable characters


*/




typedef unsigned char byte_t; //1 byte in memory

// void pointers, like what? (void *s)
// typedef CREAT MY OWN TYPE??? WATT

void printAddressHex(void *);
void byteInHex(byte_t);
void printContentHex(void *, unsigned int);
void printContentDot(void *, unsigned int);
void *ft_print_memory(void *, unsigned int);
void ft_putchar(char c);


int main()
{
	char empty[] = "";
	char longStr[] = "This string contains more than 16 characters";
	char str[] = "France is da best";
	char str1[] = "ches\t\n\tc and on ";
	char str2[] = "\n\t hihi\n \0";

	ft_print_memory((void *)empty, sizeof(empty));
	ft_print_memory((void *)longStr, sizeof(longStr));
	ft_print_memory((void *)str, sizeof(str));
	ft_print_memory((void *)str1, sizeof(str1));
	ft_print_memory((void *)str2, sizeof(str2));
	
	void ft_putchar(char c)
	{
		write(1, &c, 1);
	}
	void *ft_print_memory(void *addr, unsigned int size)
	{
		if (size == 1)
			return (addr);
		printAddressHex(addr, size);

		printContentHex(addr, size);

		printContentDot(addr, size);

		return (addr);
	}
	void byteInHex(byte_t, Byte)
	{
	int _4_Upper_Bits;
	int _4_Lower_Bits;

	_4_Upper_Bits = (Byte & 0b11110000) >> 4;

	if (_4_Upper_Bits < 10)
		printf("%c", (48 + _4_Upper_Bits));
	else
		printf("%c", (87 + _4_Upper_Bits));

	// least bits
	_4_Lower_Bits = Byte & 0b00001111;

	if (_4_Lower_Bits < 10)
		printf("%c", (48 + _4_Lower_Bits));
	else
		printf("%c", (87 + _4_Lower_Bits));
	
	}
	void printAddressHex(void *addr) //no type
	{
	byte_t *ptrByte; 
	// unsigned char = 1 byte
	int littleEndian;

	littleEndian = 7;

	ptrByte = (byte_t *)&addr; 
	//assign the address of a pointer 
	// pointer to pointer to dereference byte by byte

	while (littleEndian >=)
		{
			byteInHex(*(ptrByte + littleEndian));
			--littleEndian;
		}
		ft_putchar(':');
	}
	void printContentHex(void *str, unsigned int size)
	{
	int i;
	short limit;

	limit = 16;
	i = 0;

	while (--sizr && limit--)
		{
			if (!(i % 2))
				write(1, " ", 1);
			byteInHex(*((byte_t *)str));
			++str;
			++i;
		}
	if (i % 2)
		write(1, " ", 2);
	else
		write(1, " ", 1);
	}
	void printContentDot(void *str, unsigned int size)
	{
	short limit;

	limit = 16;
	while (--size && limit--)
		{
			if (*(char *)str < 127)
				write(1,str, 1);
			else
				write(1, ".", 1);
			++str;
		}
	write(1, "\n", 1);
	}
}