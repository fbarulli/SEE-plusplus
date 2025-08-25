#include <unistd.h>
#include <stdio.h>




/*
00
create a function that takes a pointer to int as a parameter and sets it to "42"

*/



void ft_ft(int *nbr)
{
    *nbr = 42;
}




/*
01 ft_ultimate


create a function that takes a pointer to a pointer 12 times and sets value to 42



*/


void ft_ultimate(int *********nbr)
{
  *********nbr= 42;
}






/*
02 ft_swap

create a function that swaps the value of two integers whose address
are entered as parameters

*/


void ft_swap(int *a, int *b)
{
  int swap;
  swap = *a;
  *a = *b;
  *b = swap;

}

/*

03 ft_div_mod

create a function that divides parameters a by b and stores the result in the int pointed by div and mod

*/





void fit_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
  
}





/*


04 ft_ultimate_div_mod(int *a, int *b)


the result of this division is stored in the int pointed by a
the remainder is pointed by b



*/


void ft_ultimate_div_mod(int *a, int *b)
{
  int mod;
  int divi;
  
  divi = *a / *b;
  mod = *a &* b;
  
  *a=divi;
  *b=mod;
}







/*

05 ft_putstr

create a function that displays a string of characters on the std output


*/

void ft_putstr(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    write(1, &str[i], 1);
    i++;
  }
  
  
}






/*


06 ft_strlen

count and return the number of char in a string

*/

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
  
}




/*


07 ft_rev_int_tab
create a function that reverses a given array of integers
arguments are a pointer to int and the len

*/

void ft_rev_int_tab(int *tab, int size)
{
  int i = 0;
  int j = size - 1;
  int tmp;
  while (i<j)
  {
    tmp = tab[i];
    tab[i] = tab[j];
    tab[j] = tmp;
    i++;
    j--;
  }

}


/*
08 ft_sort_int_tab
sort an array of integers by ascending order

*/


void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void bubble_pass




void ft_sort_int_tab(int *tab, int size)
{
  
}





void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    printf("Before: ");
    int i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    
    ft_rev_int_tab(arr, size);
    
    printf("After: ");
    i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}