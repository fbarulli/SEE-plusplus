#include <unistd.h>
#include <stdio.h>

int length(char *c)
{
	int counter = 0;
	
	while (c[counter])
		{
			counter++;
		}
	return counter;
}

char *ft_strrev(char *str)
{
	
	int len = length(str);
	while (len > 0)
		{
			write(1, &str[len--], 1);
		}
}


int main()
{
	
	char *string = "hihihaha";
	ft_strrev(string);
	
	
	
	return 0;
}