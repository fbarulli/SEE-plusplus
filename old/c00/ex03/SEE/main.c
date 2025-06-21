/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

****************************************************************************/
#include <unistd.h>

void ft_is_negative(int number)
{
    char n;
    char p;
    
    n = 'N';
    p = 'P';
    
    if (number >= 0)
    write(1, &p,1);
    else
    write(1, &n, 1);
    
}

int main()
{
    ft_is_negative(-1);
    
    return 0;
}