#include <unistd.h>
#include <stdio.h>


// simple write

void put_char(char c){
    write(1,&c, 1);
}

void for_write_reverse(void){
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int len = 0;

    while (alpha[len] != '\0'){
        len++;
    }
    for (int i = len - 1; i >=0; i--){
        write(1, &alpha[i], 1);
    }}



    void while_write_reverse(void){
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int len = 0;

    while (alpha[len] != '\0'){
        len++;}
    len--;
    while (len >=0){
        write(1, &alpha[len], 1);
        len--;
    }
    }

    



void pointer_alpha(void){
    char *letter = "abcdefghijklmnopqrstuvwxyz";
    int len = 0;

    while (*(letter + len) != '\0'){
        len++;}
    
    char *ptr = letter + len -1;
    while (ptr>= letter){
        write(1, ptr, 1);
        ptr--;
    }}


int main(){
    put_char('\n');
    for_write_reverse();
    put_char('\n');

    while_write_reverse();}

