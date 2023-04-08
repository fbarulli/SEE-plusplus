#include <unistd.h>
#include <stdio.h>
#include <string.h>

 
/*
strcpy() copies string from src to dest (including null terminator charactor)
returns dest
does not include any size restrictions
*/

#define BUF_SIZE 10


// it has decayed into a pointer
char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (*src)
		//
		*(dest + i++) = *src++;
	*(dest + i) = '\0';
	return (dest);
}


 int main()
{
	char srcBuffer[256]; //
	char destBuffer[BUF_SIZE];
	char c;
	int i;

	i = 0;
	for (int j=0; j < 10; ++j)
		{
			while ((c = rand() % 27 + 97) != 123)
				srcBuffer[i++] = c;
			
			srcBuffer[i] = 0;
			i = 0;

			puts("RANDOM STRING SOURCE");

			(*srcBuffer) ? printf("%s \nSIZE-> %lu\n", srcBuffer, strlen(srcBuffer)) : puts("empty string");
			// is there a value = TRUE ? if so..																		if FALSE print emtpy
			printf("DEST BUF SIZE -> %d\n", BUF_SIZE);
			printf("\nFrom original function->           DEST = 	 %s\n", strcpy(destBuffer, srcBuffer));

			
		for (int i = 0; i<BUF_SIZE; i++)destBuffer[i]=0;
		printf("From my function->                     DEST = %s\n\n\n", ft_strcpy(destBuffer, srcBuffer));
		
		
		
		
		
		}
	







	
}