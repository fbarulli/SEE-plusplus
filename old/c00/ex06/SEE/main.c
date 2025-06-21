#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nbr) {

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
}

int main(void)
{
	ft_putnbr(42);
	return (1);
}