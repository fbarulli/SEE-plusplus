#include <unistd.h>




void ft_putchar(char c)
{
  write(1, &c, 1);
}


void ft_print_combo(void)
{
  for (char a = '0'; a <= '7'; a++)
  {
    for (char b = a+1; b<= '8'; b++)
    {
      for (char c = b + 1; c<='9'; c++)
      {
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(c);
        if (!(a == '7' && b == '8' && c == '9'))
        {
          ft_putchar(',');
          ft_putchar(' ');
          
        }
      }
    }
  }
}







int main(){
  ft_print_combo();
} 