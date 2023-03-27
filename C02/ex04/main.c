#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
	int iterator;
	iterator = 0;
	
	while(str[iterator])
		{
			if (str[iterator] >= 97  || str[iterator] <= 122) 
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
	char *str2 = "akjsbkajs";

	int result = ft_str_is_lowercase(str1);
	printf("%d\n", result);
	return (0);
	
}