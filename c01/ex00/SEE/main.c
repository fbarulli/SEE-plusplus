#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}



int main()
{

	int *pp;
	int number = 22;

	pp = &number;
	ft_ft(pp);
	printf("%d\n", number);
	


	return 0;
}
