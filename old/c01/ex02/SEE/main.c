#include <stdio.h>
#include <unistd.h>


	
void ft_swap_naive(int a, int b) // doestn work
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	
}

void ft_swap(int *a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void xor_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}






int main() 
{
	int n = 42; 
	int n1 = 21;

	printf("using ft_swap \nbefore\n %d, %d\n", n, n1);
	ft_swap_naive(&n ,&n1);
	printf("using navie_ft_swap \n after\n %d, %d\n", n, n1);

	printf("using ft_swap \nbefore\n %d, %d\n", n, n1);

	ft_swap(&n, &n1);
	printf("using ft_swap \nafter \n %d, %d\n", n, n1);

	printf("using xor_swap \nbefore\n %d, %d\n", n, n1);
	xor_swap(&n, &n1);

	printf("using xor_swap \nafter \n %d, %d\n", n, n1);

		


	return 0;
}
