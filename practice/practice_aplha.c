#include <stdio.h>


#include <unistd.h>



void print_array(void)
{
    char array[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    
    while (array[i] != '\0')
    {
        write(1, &array[i], 1);
        i++;
    }
}



void print_pointer_array(void)
{
    char *array = "abcdefghijklmnopqrstuvwxyz";
    
    while (*array)
    {
        write(1, array,1);
        array++;
    }
}




void reverse_array(void)
{
    char array[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;
    
    while (array[1] != '\0') {i++;}
    
    while (i-- >= 0){
        write(1, &array[i], 1);
    }
}




void reverse_pointer(void)
{
    char *start = "abcdefghijklmnopqrstuvwxyz";
    char *end = array;
    
    // find end
    while (*end){
        end++;
    }
    
    while (--end >= 0 start){
        write(1, end, 1);
    }
    
    
    
    
    
}




int main() {
//ft_print_alpha();
//print_array();
print_pointer_array();

}

