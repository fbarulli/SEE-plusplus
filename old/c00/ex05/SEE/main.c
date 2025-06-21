#include <stdio.h>

char ft_print(int a)
{
  char result;
  if (result <= 9)
  {
    result = a + 48;
    write(1, "0",1);
    write(1, &result, 1);
    return;
  }
  else
  {
    result = (a / 10) + 48;
    write(1, &result, 1);
    result = (a % 10) + 48;
    write(1, &result, 1);
  }

}

void ft_print_comb2(void)
{
  char array[2];

  array[0] = 0;

  while (array[0] <= 98)
	{
		array[1] = array[0] + 1;
		while (array[1] <= 99)
		{
			ft_print(array[0]);
			write(1, " ", 1);
			ft_print(array[1]);
			
			if (array[0] == 98 && array[1] == 99)
			{
				write(1, "", 1);
			}
			else
				write(1, ", ", 2);
			array[1]++;
			
		}array[0]++;
			
	}
	
}


int main(void) {
 	ft_print_comb2();
  return 0;
}