#include <stdio.h>  // For printf

void ft_swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);  // Prints: x=10, y=20
    ft_swap(&x, &y);                                // Swaps values
    printf("After swap:  x = %d, y = %d\n", x, y);  // Prints: x=20, y=10

    return 0;
}