#include <unistd.h>
#include <stdio.h> // For printf

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int a;       // Declare an integer variable
    ft_ft(&a);   // Pass the address of 'a' to ft_ft
    
    printf("The value of 'a' is: %d\n", a); // Print the value to verify
    return 0;
}