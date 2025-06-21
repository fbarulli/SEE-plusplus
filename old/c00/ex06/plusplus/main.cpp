#include <iostream>
using namespace std;


void ft_putchar(char c)
	{
		std::cout.write(&c, 1);
    return ;    
  }

	void ft_putnbr(int nbr)
	{
		if (nbr < 0){
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= 10){
			ft_putnbr(nbr / 10);
			nbr %= 10;
		}
		if (nbr <10) ft_putchar(nbr + 48);
	}
int main() 
{
	

	ft_putnbr(10000);
	return 1;


	
}