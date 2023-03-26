char *ft_strcpy(char *destination, char *source)
{
	int i;

	i = 0;

	while (source[i])
		{
			destination[i] = source[i];
			i++;
		}
	destination[i] = source[i];
	return destination;
}

int main()
{
	char str1[] = "me";
	char str2[] = "you";

	printf("%s\n", str1);   
	ft_strcpy(str1, str2);  
	printf("%s\n", str1);

	return (0);
}