
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{ 
    write(1, &c, 1);
}

void ft_putnbr(int nb){
    // special case smallest number 32 bit
    if (nb == -2147483648){
        write(1,"-2147483648", 11);
        return;
    }

    if (nb <0){
        ft_putchar('-');
        nb = -nb;
    }


    if (nb >= 10){
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);

    }

    else{
        ft_putchar(nb + '0');
    }


}


int main(void)
{
    ft_putnbr(42);      // Output: "42"
    ft_putchar('\n');
    ft_putnbr(-123);     // Output: "-123"
    ft_putchar('\n');
    ft_putnbr(0);        // Output: "0"
    ft_putchar('\n');
    ft_putnbr(-2147483648); // Output: "-2147483648"
    return 0;
}