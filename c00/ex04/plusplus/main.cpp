/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void ft_putchar(char a, char b, char c)
{
    std::cout.write(&a, 1);
    std::cout.write(&b, 1);
    std::cout.write(&c, 1);
    
    if (a != '7' || b!= '8' || c!='9')
    {
        std::cout.write(", ", 2);
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
        while (b <='8')
        {
            a = b + 1;
        
            while (a <= '9')
            {
            ft_putchar(c, b, a);
            a++;
            
            }
            b++;
            
        }c++;
    }
}


int main()
{
    ft_print_comb();
    return 0;
}