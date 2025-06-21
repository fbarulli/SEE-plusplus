#include <stdio.h>
#include <unistd.h>
/*pointer array duality

an array decays into a pointer unless (& or size of is used ) to first position. 

v[i] = *(v+i)

*/

void swap(int *a, *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}


void ft_rev_int_tab(int *tab, int size)
{
	int swaps;
	int i;

	i = 0;
	swaps = size/2;
	while (swaps --)
		// 
		swap( &(tab[i++]), &(tab[--size])); 
}








void address(int *array)
{
	printf("\n%p\n\n", &array); //this is the address of the pointer that signals to vector[0]
}
 

int main()
{
	int vector[10];

	for (int i=0; i<10; ++i)
		vector[i] = rand()%101;

	//printf("\n\n%p\n\n", &vector); //actual address 
	//address(vector);

	printf("\nBEFORE\n");
	for (int i = 0; i <10; i++)
			printf("%d ", vector[i]);
	printf("\n");

	ft_rev_int_tab(vector, sizeof(vector)/ sizeof(vector[0]));
	
	printf("\nAFTER\n");
	for (int i = 0; i <10; i++)
			printf("%d ", vector[i]);
	printf("\n");
			
		
		
}