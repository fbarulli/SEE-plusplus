#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


 
/*
ft_iterative_factorial

-Create an iterated function that returns a number. This number is the result of a
factorial operation based on the number given as a parameter.

-Your function must return its result in less than two seconds
n *(n-1)
*/

int ft_iterative_factorial(int nb)
{
	if (nb >= 1)
		return nb*(ft_iterative_factorial(nb-1));
	else
		return 1;
}






int main()
{
   clock_t start_t, end_t;
   double total_t;
   int i;

   start_t = clock();
	 start_t = start_t / CLOCKS_PER_SEC;
   printf("Starting of the program, start_t = %ld\n", start_t);
    
	 ft_iterative_factorial(1287386);
		
   
   //printf("End of the big loop, end_t = %ld\n", end_t);
   
   total_t = (((double) clock()) / CLOCKS_PER_SEC) - start_t;
   printf("Total time taken by CPU: %f\n", total_t  );


	return (0);




	
}
