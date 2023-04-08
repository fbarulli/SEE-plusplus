#include <unistd.h>
#include <stdio.h>
#include <string.h>

 
/*
strncpy() copies string from src[:n] to dest, not including null terminator
originally meant to insert one string into another
returns dest (without a second \0)
does not include any size restrictions
*/


char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (*src && n)
		{
			*(dest + i++) = *src++;
			n--;
		}
	
	while (n--)
		*(dest + i++) = '\0';
	return (dest);	
}

#define BUF_SIZE 60
#define N 50

 int main()
{
	char	srcBuffer[256];
	char	dstBuffer[BUF_SIZE];
	int 	j;
	char	c;

	for (int i=0; i<20; ++i)
	{
		
		//Refresh j
		j = 0;
		//Clean the buffers
		for (int i=0; i<BUF_SIZE; ++i)dstBuffer[i]='/';
		for (int i=0; i<256; ++i)srcBuffer[i]=0;

		//Fill source with random chars
		while ((c = rand()%27 + 97) != 123)srcBuffer[j++] = c;
		//Sentinel '\0'
		srcBuffer[j] = '\0';

		printf("-----------------------------------------"
				"\nIf (N > source) i will pad [%d - %lu] of 0s dest."  
				"\n\n\nSource Buffer                -> %s \nLen->%lu\n", N, strlen(srcBuffer), *srcBuffer ? srcBuffer : "Empty line", strlen(srcBuffer));
		printf("Dest Buffer before function  -> %s\n Len-> %lu\n", dstBuffer, strlen(dstBuffer));
		printf("Elements to copy           N -> %d\n", N);
		printf("Dest Buffer after real function   -> %s\n", strncpy(dstBuffer, srcBuffer, N));

		//Check the bytes
		printf("BYTES IN MY DEST BUFFER AFTER STRNCPY ORIGINAL\n");
		for (int i=0; i<BUF_SIZE; ++i) 
			(dstBuffer[i] == 0) ? printf("0") : printf("%c ", dstBuffer[i]);
		printf("\n\n------------------------------------------\n");
		
		for (int i=0; i<BUF_SIZE; ++i)dstBuffer[i]='/';
		printf("Dest Buffer after my function     -> %s\n", ft_strncpy(dstBuffer, srcBuffer, N));
 		printf("BYTES IN MY DEST BUFFER AFTER MY FT_STRNCPY \n");
		for (int i=0; i<BUF_SIZE; ++i)
			(dstBuffer[i] == 0) ? printf("0") : printf("%c ", dstBuffer[i]);
		printf("\n\n------------------------------------------\n\n\n\n\n\n\n\n");
	}


}