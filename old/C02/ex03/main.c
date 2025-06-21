#include <stdio.h>
int ft_str_is_numeric(char *str)
{
	int iterator;
	iterator = 0;
	
	while(str[iterator] != '\0')
		{
			if (str[iterator] <= 47  || str[iterator] >=58) 
			{
				
				return (0);

			}
			iterator++;
		}
		return (1);
}

int main()
{
	char str[] = "kjasnfbjkas";
	char str1[] = "1111111";
	char *str2 = "akjsbkajs";

	int result = ft_str_is_numeric(str);
	printf("%d\n", result);
	return (0);
	
}