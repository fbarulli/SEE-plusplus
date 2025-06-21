int ft_str_is_alpha(char *str)
{
	int iterator;
	iterator = 0;
	
	if (str[iterator] == "\0")
		return (1);
	
	while (str[iterator] != '\0')
	{
		if (str[iterator] < 65 || (str[iterator] > 90 && str[iterator] < 97) || str[iterator] > 122)
		return (0);	
		iterator++;

	
		
	}
	return (1);
}

int	main(void)
			   
{
	char	alphabet[] = "abcdefghi";
	
	ft_str_is_alpha(alphabet);
	
	printf("%d", ft_str_is_alpha(alphabet));
	printf("\n");
	
	char	number[] = "12285";
	
	ft_str_is_alpha(number);
	
	printf("%d", ft_str_is_alpha(number));	
	
	return (0);
	}