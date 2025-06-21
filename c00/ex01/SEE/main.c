/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>



/******************************************************************************/
/* using write and letters */

void    ft_print_alphabet(void){
    char letter = 'a';
    while ( letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}

/******************************************************************************/
/* using write and numbers */

void    ft_print_a_p2(void)
{
    int letter = 97;
    while (letter <= 122)
    {
        write(1, &letter, 1);
        letter++;
    }
    return;
}


/******************************************************************************/
/* using for and printf */

void ft_print_alphabet(void){
    for (char letter = 'a'; // initialization
        letter <= 'z'; // condition
        letter++)
    {
    printf("%c", letter);
    }
/******************************************************************************/
/* using string array + write */

void ft_print_alphabet(void) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    write(1, alphabet, 26);
}





/******************************************************************************/
void put_char(void){
    char letter = 'a';
    while (letter <= 'z'){
        putchar(letter);
        letter++;
    }
}
/******************************************************************************/




void ft_print_alphabet(void){
    char *letter = 'abcdefghijklmnopqrstuvwxyz';
    while (*letter) {
        write(1, letter, 1);
        letter++;
    }
}








int main()
{
    ft_print_a_p2();

    return 1;
}
