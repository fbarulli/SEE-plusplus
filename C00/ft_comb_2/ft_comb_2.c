

#include <unistd.h>


void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print2(void)
{
  for (int x = 0; x<=98; x++)
  {
    for (int y = x + 1; y<=99; y++)
    {
      ft_putchar((x / 10) + '0');
      ft_putchar((x % 10) + '0');
      ft_putchar(' ');
      ft_putchar((y / 10) + '0');
      ft_putchar((y % 10) + '0');
      if ( x!= 98 || y != 99)
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
      
    }
  }
}

int main()
{
  ft_print2();
}