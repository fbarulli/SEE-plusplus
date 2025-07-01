#include <unistd.h>
#include <stdio.h>

void put_char(char c){
    write(1,&c,1);
}



void write_alpha(void){
    char letter = 'a';
    while (letter <= 'z'){
        write(1, &letter, 1);
        letter++;
    }
}

void write_array(void){
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int len = 0;
    while (alpha[len]!= '\0'){
        
    }
    write(1, &alpha, len);
}


void pointer_alpha(void){
    char *letter = "abcdefghijklmnopqrstuvwxyz";
    while (*letter){
        write(1, letter, 1);
        letter++;
    }
}




void for_print_alpha(void){
    
    for (char letter = 'a'; letter <='z'; letter++){
        printf("%c", letter);
    }

}

int main(){
    put_char('\n');
    write_alpha();
    put_char('\n');
    write_array();
    put_char('\n');
    return 0;
}