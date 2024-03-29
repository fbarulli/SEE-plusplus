#include <unistd.h>


int ft_atoi(char *str)
{
	int c;
	int s;
	int res;
	
	c = 0;
	s = 1;

	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
	
}

int		main(void)
{
	printf("%d\n", ft_atoi("      	---+--+2147--+-ab567"));

}