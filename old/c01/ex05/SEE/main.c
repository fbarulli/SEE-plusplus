#include <unistd.h>



void ft_putstr(char *str)
{
	while (*str != '\0') // 0 (int) would also work
		{
			write(1, str, 1); 
			str++;
		}
}
void pro_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void recursive(char *str)
{
	write(1, str, 1);
	if (*str)
		recursive(str+1);
}


int main(){
	char *s;
	s = "lol";
	pro_str(s);

	ft_putstr(s);
	recursive(s);

	return 0;


	
}