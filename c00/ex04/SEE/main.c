/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

****************************************************************************/
#include <unistd.h>

void ft_write(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a != '7' || b!= '8' || c!='9')
    {
        write(1, ", ", 2);
    }
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;
        
    c = '0';
    
    while (c <= '7')
    {
        b = c + 1;
        
        while (b <= '8')
        {
            a = b + 1;
            while (a <= '9')
            {
                ft_write(c, b, a);
                a++;
            }
            b++;
        }
        c++;       
    }
    
}


int main()
{
    ft_print_comb();
    return 0;
    
}










