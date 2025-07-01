

#include <unistd.h>
#include <stdio.h>


void put_char(char c){
    write(1, &c,1);
}

void simple_print_numbers(void){
    int num = '0';
    while (num<='9'){
        write(1,&num,1);
        num++;
    }}


void array_print(void){
 char numbers[]= "0123456789";
 int len = 0;
    while (numbers[len] != '\0'){
         len++;}
    write(1, &numbers, len);

 }
 
void for_loop_print_num(){
    for (int i = 0; i <=9; i++){
        char c = i + '0';
        write(1, &c,1);
    }
}




int main()
{
    simple_print_numbers();
    put_char('\n');
    array_print();
    put_char('\n');
    for_loop_print_num();
    

    return 0;
}