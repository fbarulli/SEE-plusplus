#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b){
	
	int holder;
	
	holder = *a;
	*a = *b;
	*b = holder;
	
	
}


int main() 
{

	int i = 22;
	int j = 11;
	
	int *p_1 = &i; 
	int *p_2 = &j;
	
	
	ft_swap(p_1, p_2);
	
	printf("%u\n", *p_1);
	


	return 0;
}
