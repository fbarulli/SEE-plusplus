#include <unistd.io>


/*
00 ft_strcpy(char *dest, char *src)
reproduce the main behaviour of strcop


*/


char *ft_strcpy(char *dest, char *src)
{
  int i = 0;
  while(src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}

/*



01 ft_strncpy(char *dest, char *src, unassigned int n)
reproduce the behaviour of strncpy


*/

char ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i = 0;
  
  while (src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }
  
  while (i < n)
  {
    dest[i] = '\0';
    i++;
  }
  return (dest);
}

/*

02 int ft_str_is_alpha(char *str)

return 1 if the string given contains only alphabetical characters 0 else.
*/

int ft_str_is_alpha(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
    {
      i++;
    }
    else
    {
      return (0);
    }
    
  }
  return (1);
    
  
}



/*

03 int ft_str_is_numeric(char *str)

return 1 if the string given contains only alphabetical characters 0 else.
*/

int ft_str_is_numeric(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= '0' && str[i] <= '0') 
    {
      i++;
    }
    else
    {
      return (0);
    }
    
  }
  return (1);
    
  
}



/*

04 int ft_str_is_lowercase(char *str)

return 1 if the string given contains lowercase characters 0 else.
*/

int ft_str_is_lowercase(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z') 
    {
      i++;
    }
    else
    {
      return (0);
    }
    
  }
  return (1);
    
  
}

/*

05 int ft_str_is_uppercase(char *str)

return 1 if the string given contains uppercase characters 0 else.
*/

int ft_str_is_lowercase(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i] <= 'Z') 
    {
      i++;
    }
    else
    {
      return (0);
    }
    
  }
  return (1);
    
  
}







/*
06
int ft_str_is_printable(char *str)

check for printable characters


*/



int ft_str_is_printable(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 32 && str[i] <= 127) 
    {
      i++;
    }
    else
    {
      return (0);
    }
    
  }
  return (1);
}



/*
07 

create a function that converts every lower case into upper case

char	*ft_strupcase(char *str)
*/



char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}




/*
08 

create a function that converts every lower case into lower case

char	*ft_strupcase(char *str)
*/



char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}





/*
09 
*/

char	*ft_strcapitalize(char *str)
{
	int i;
	int upper;

	i = 0;
	upper = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= '0' && str[i] <= '9'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = (str[i] - 32);
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             



/*

10 ft_strlcpy
reproduce the behaviour of strlcpy




*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

/* 

11 ft_putstr_non_printable

create a function that displays a string of characters on screen. if this string contains characters that arent printable, 
print in hexadecimal lowercase preceeded by a backslash.
*/





void	ft_put_hexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		ft_put_hexa(c / 16, 1);
		ft_put_hexa(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_put_hexa(j, 0);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

























