

#include <unistd.h>
#include <stdio.h>




// (condition) ? value_if_true : value_if_false;
// ? is shorthand for if-else
#include <unistd.h>

#include <unistd.h>

void    ft_print_comb2(void)
{
    char    buffer[7]; // Stores "00 00, " (6 chars + null terminator)

    for (int i = 0; i <= 98; i++)
    {
        for (int j = i + 1; j <= 99; j++)
        {
            // Convert first number (i) to two chars
            buffer[0] = (i / 10) + '0'; // Tens digit
            buffer[1] = (i % 10) + '0'; // Units digit
            buffer[2] = ' ';            // Space separator
            // Convert second number (j) to two chars
            buffer[3] = (j / 10) + '0';
            buffer[4] = (j % 10) + '0';
            // Add separator unless it's the last pair
            if (i != 98 || j != 99)
            {
                buffer[5] = ',';
                buffer[6] = ' ';
                write(1, buffer, 7);
            }
            else
                write(1, buffer, 5); // No separator after last pair
        }
    }
}
    


int main()
{
    ft_print_comb2();

    return 0;
}