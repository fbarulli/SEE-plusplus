#include <iostream>
using namespace std;

void ft_putchar(int number)
{
  char c;
  
  if (number < 10)
  {
    c = number + 48;
    std::cout.write("0", 1);
    std::cout.write(&c, 1);
    return ;    
  }
  c = (number/ 10) + 48;
  std::cout.write(&c, 1);
  c = (number % 10) + 48;
  std::cout.write(&c, 1);
}

void ft_print_comb2(void)
{
  int array[2];
  array[0] = 0;

  while (array[0] <=98)
  {  
    
    array[1] = array[0] + 1;
    while (array[1] <= 99)
    {
      ft_putchar(array[0]);
      std::cout.write(" ", 1);
      ft_putchar(array[1]);
      if (array[0] == 98 && array[1] == 99)
        {
          //std::cout.write(".", 2);
        }
      else 
        std::cout.write(", ", 2);
      array[1]++;   
    }  
    array[0]++;
    
        
    }
    
}


int main() {
  ft_print_comb2();
  
}