/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>

void    ft_print_alphabet(void)
{
    char letter;
    
    letter = 'a';
    
    while ( letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}

void    ft_print_a_p2(void)
{
    int letter;
    
    letter = 97;
    
    while (letter <= 122)
    {
        write(1, &letter, 1);
        letter++;
    }
    return;
}
    

int main()
{
    ft_print_a_p2();

    return 1;
}
