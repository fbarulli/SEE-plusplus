#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c) {
    write(1, &c, 1);
}

/*

for n = 2
*1
ft_print_combn(2)
int buffer[2]
combine(start = 0, depth = 0, n = 2, buffer = [?, ?])

*2

combine(start = 0, depth = 0, n = 2, buffer = [?, ?])
{
depth==n ? no
start > 9? no
buffer[0] = 0
combine(start = 0 + 1, depth = 0 + 1, n = 2, buffer = [0, ?])
combine(start = 1, depth = 1, n = 2, buffer = [?, ?])
depth == n? no 
buffer[1] = 1
combine(start = 1 + 1, depth = 1 + 1, n = 2, buffer = [0, 1])
combine(start = 2, depth = 2, n = 2, buffer = [0, 1])
depth == n? yes
            {

            void print_combination(int *buffer, int n)
            {
                if (n <= 0) return;
                ft_putchar(buffer[0] + '0');
                print_combination(buffer+1, n -1);
            }
            buffer = [0, 1], n= 2
            print_combination( int *buffer, int n)
            print_combination( [0,1], 2)
            buffer[0] is 0 
            ft_putchar(buffer[0] + '0'); => prints 0
            print_combination(buffer+1, n -1);
            print_combination(1, 1);
            ft_putchar(buffer[0] + '0'); => prints 1
            print_combination(buffer+1, n -1); 
            print_combination(buffer+1, 0); 


                

            }


print_combination(buffer+1 , n-1)
print_combination(0, 1)
ft_putchar(0+ '0')
print_combination(buffer+1 , n-1)
print_combination(1, 0)
n <= 0? yes, end function
back into combine,
depth









*/











/*







#1 

n = 2

void ft_print_combn(int n)
{
    if (n <= 0 || n >=10) return;
    int buffer[n];
    combine(0, 0, n, buffer);
}

    -Inside combine
    

    void combine(int start, int depth, int n, int *buffer)
{
    if (depth == n)
    {
        print_combination(buffer, n);
        if (buffer[0] != 10 - n)write(1, ", ", 2);
        return;
    }
    if (start > 9) return;
    buffer[depth] == start;
    combine(start + 1, depth + 1, n, buffer);
    combine(start + 1, depth, n, buffer);
}
combine(START= 0, DEPTH= 0, N = 2, buffer);

if (depth == n)
    (0 == 2) : no




if (start > 9) return;
    buffer[depth] = start;
    combine(start + 1, depth + 1, n, buffer);
    combine(start + 1, depth, n, buffer);

  ? start > 9? yes, then proceed with:
    buffer[depth] = start;     buffer = [?, ?], depth = 0, start = 0
    
    buffer[0] = 0;
    combine(start + 1, depth + 1, n, buffer);
            {
                    combine(1, 1, n, buffer);
                    if (depth == n) if (0 == 2) ? no, then we continue:
                    if (start > 9) return; yes, continue
                    buffer[1] == 1;
                    combine(1 + 1, 1 + 1, 2, buffer)
                    {
                        combine(2, 2, 2, buffer)
                        if (depth == n) if (2 == 2) ? yes, we then:
                        
                    }


            }




    combine(start + 1, depth, n, buffer);
    





*/


void print_combination(int *buffer, int n)
{
    if (n <= 0) return;
    ft_putchar(buffer[0] + '0');
    print_combination(buffer+1, n -1);
}

void combine(int start, int depth, int n, int *buffer)
{
    if (depth == n)
    {
        print_combination(buffer, n);
        if (buffer[0] != 10 - n)write(1, ", ", 2);
        return;
    }
    if (start > 9) return;
    buffer[depth] = start;
    combine(start + 1, depth + 1, n, buffer);
    combine(start + 1, depth, n, buffer);
}

void ft_print_combn(int n)
{
    if (n <= 0 || n >=10) return;
    int buffer[n];
    combine(0, 0, n, buffer);
}