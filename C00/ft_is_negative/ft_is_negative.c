#include <unistd.h>

void    ft_print_comb(void)
{
    char    digits[3];

    digits[0] = '0';
    while (digits[0] <= '7')  // First digit: 0 to 7
    {
        digits[1] = digits[0] + 1;
        while (digits[1] <= '8')  // Second digit: (first+1) to 8
        {
            digits[2] = digits[1] + 1;
            while (digits[2] <= '9')  // Third digit: (second+1) to 9
            {
                write(1, digits, 3);  // Print the combination
                if (digits[0] != '7')  // Add comma and space if not last
                    write(1, ", ", 2);
                digits[2]++;
            }
            digits[1]++;
        }
        digits[0]++;
    }
}

int main(void)
{
    ft_print_comb();
    return 0;
}