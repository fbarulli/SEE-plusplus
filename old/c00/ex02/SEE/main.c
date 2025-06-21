/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

****************************************************************************/
#include <unistd.h>

void ft_print_numbers(void)
{
    int number;
    
    number = 48;
    
    while (number <= 57)
    {
        write(1, &number, 1);
        number++;
    }
}

int main()
{
    ft_print_numbers();
    
    return 0;
}