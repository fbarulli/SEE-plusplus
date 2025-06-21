#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
	int iterator;
	iterator = 0;
	
	while(str[iterator])
		{
			if (str[iterator] < 'A' || str[iterator] > 'Z') 
			{
				
				return (0);

			}
			iterator++;
		}
		return (1);
}

int main()
{
	char str[] = "kjasAAfbjkas";
	char str1[] = "1111111";
	char str2[] = "A";
	char str3[]= "";

	int result = ft_str_is_uppercase(str3);
	printf("%d\n", result);
	return (0);
	
}