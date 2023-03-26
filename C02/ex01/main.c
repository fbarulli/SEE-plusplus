char *ft_strncpy(char *destination, char *source, unsigned int n)
{
	int i;

	i = 0;

	while (source[i] != '\0' && i < n)
		{
			destination[i] = source[i];
			i++;
		}
	destination[i] = source[i];
	return destination;
}

int main()
{
	char destination[] = "destination";
	char source[] = "source";

	printf("%s\n", destination);   
	ft_strncpy(destination, source, 3);  
	printf("%s\n", destination);

	return (0);
}