#include <stdio.h>
#include <unistd.h>



char    *ft_strcapitalize(char *str)
    {
        int i;
        i = 0;

        while (str[i])
        {
            if ((i == 0) && ((str[i] >= 'a') && (str[i] <= 'z')))
							{
								str[i] -= 'a' - 'A';
								i++;
							}
						
						else if ((i >=1) && (str[i-1] <= 47) && ((str[i] >= 'a') && (str[i] <= 'z')))
								{
									str[i] -= 'a' - 'A';
                	i++;
              	}
						else
							i++;
          }
        
    
    return (str);
    }

int main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("%s\n", ft_strcapitalize(str));
    

    
}