#include <stdio.h>
int ft_str_is_printable(char *str)
{
	int iterator;
	iterator = 0;
	
	while(str[iterator])
		{
			if (str[iterator] < 32 || str[iterator] > 126) 
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
	char unpr[] = "Unprintables: \t (tab), \a (?)";

	int result = ft_str_is_printable(unpr);
	printf("%d\n", result);
	return (0);
	
}