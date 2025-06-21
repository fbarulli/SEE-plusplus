#include <unistd.h>
#include <stdio.h>



// simple write

void write_ft_putchar(void){
    char letter = 'a';
    write(1,&letter,1);
}

void putchar_ft_putchar(char c){
    putchar(c);
}
void printf_ft_putchar(char c){
    printf("%c", c);
}

void pointer_ft_putchar(char c){
    char *ptr = &c;
    write(1, ptr, 1);

}








int main(){
 //write_ft_putchar();
 //putchar_ft_putchar('a');
 //printf_ft_putchar('a');
 pointer_ft_putchar('a');
}