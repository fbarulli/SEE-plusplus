

#include <unistd.h>
#include <stdio.h>




// (condition) ? value_if_true : value_if_false;
// ? is shorthand for if-else
#include <unistd.h>

#include <unistd.h>

void    ft_print_comb2(void){
    for (int i = 0; i <=98; i++){
        for (int j = i + 1; j <=99; j++){
            char num1[2] = { ( i / 10) + '0', (i % 10) + '0'};
            char num2[2] = { ( j / 10) + '0', (j % 10) + '0'};
            write(1, num1, 2);
            write(1, " ", 1);
            write(1, num2, 2);
            if (i != 98 || j != 99)
            write(1, ", ", 2);
        }
    }





}

    


int main()
{
    ft_print_comb2();

    return 0;
}