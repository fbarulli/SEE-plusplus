

#include <unistd.h>
#include <stdio.h>




// (condition) ? value_if_true : value_if_false;
// ? is shorthand for if-else
#include <unistd.h>

void    ft_print_comb(void)
{
    int i, j, k;
    char output[3];
    i = 0;
    while (i <= 7){
        j = i + 1;
        while(j <= 8){
            k = j + 1;
            while(k <=9){
                output[0] = i + '0';
                output[1] = j + '0';
                output[2] = k + '0';
                write(1, output, 3);
                if ( i!= 7) write(1, ", ", 2);
                k++;
                
            }
            j++;
        }
        i++;
    }
}

    
    


int main()
{
    ft_print_comb();

    return 0;
}