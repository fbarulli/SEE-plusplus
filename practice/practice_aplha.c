
#include <unistd.h>





ft_putchar(char c)
{
  write(1, &c, 1);
}

ft_print_alphabet(void)
{
  int c = 96;
  while (++c < 123)
  {
    ft_putchar(c);
  }
}

ft_print_alphabet_rev(void)
{
  int c = 123;
  while (--c > 96)
  {
    ft_putchar(c);
  }
}


ft_print_num()
{
  char num = '0';
  while (num <='9'){
    ft_putchar(num);
    num++;
  }
}

ft_print_num_rev()
{
  char num = '9';
  while (num >='0'){
    ft_putchar(num);
    num--;
  }
}


ft_is_negative(int n)
{
  char answer;
  if (n <0)
  {
    answer = 'N';
    ft_putchar(answer);
  }
  else
  {
    answer = 'P';
    ft_putchar(answer);
    
  }
}










ft_print_comb()
{
  for (char a = '0'; a<='7'; a++ )
  {
    for (char b = a + 1; b<= '8'; b++)
    {
      for (char c = b + 1; c<='9'; c++)
      {
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(c);
        if (a != '7' || b != '8'|| c != '9')
        {
          write(1, "", 1);
          write(1, " ", 1);
          
        }
        
      }
    }
  }
}






ft_print_comb_2()
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
      if (x != 98 || y != 99)
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
    }
  }
}





void ft_putchar(char c) {
    write(1, &c, 1);
}

void print_combination(int *buffer, int n) {
    if (n <= 0) return;
    ft_putchar(buffer[0] + '0');
    print_combination(buffer + 1, n - 1);
}

void combine(int start, int depth, int n, int *buffer) {
    if (depth == n) {
        print_combination(buffer, n);
        if (buffer[0] != 10 - n) write(1, ", ", 2);
        return;
    }
    if (start > 9) return;
    buffer[depth] = start;
    combine(start + 1, depth + 1, n, buffer);
    combine(start + 1, depth, n, buffer);
}

void ft_print_combn(int n) {
    if (n <= 0 || n >= 10) return;
    int buffer[n];
    combine(0, 0, n, buffer);
}










int main()
{
 write(1, "ft_print_alphabet()\n", 20);
 write(1, "\n", 1);
 ft_print_alphabet();
 write(1, "\n", 1);
 write(1, "\n", 1);
 write(1, "\n", 1);
 
 
 
 write(1, "ft_print_alphabet_rev()\n", 24);
 write(1, "\n", 1);
 ft_print_alphabet_rev();
 write(1, "\n", 1);
 write(1, "\n", 1);
 
 
 
 write(1, "ft_print_num()\n", 14);
 write(1, "\n", 1);
 ft_print_num();
 write(1, "\n", 1);
 write(1, "\n", 1);
 
 write(1, "ft_print_num_rev()\n", 18);
 write(1, "\n", 1);
 ft_print_num_rev();
 write(1, "\n", 1);
 write(1, "\n", 1);
 
 write(1, "ft_is_negative()\n", 16);
 write(1, "\n", 1);
 ft_is_negative(4);
 write(1, "\n", 1);
 ft_is_negative(-4);
 write(1, "\n", 1);
 write(1, "\n", 1);
 
 write(1, "ft_print_comb\n", 13);
 write(1, "\n", 1);
 ft_print_comb();
 write(1, "\n", 1);
 
 
 
 write(1, "ft_print_comb_2\n", 15);
 write(1, "\n", 1);
 ft_print_comb_2();
 write(1, "\n", 1);
 
 
 
 
 
 
    
}