#include <unistd.h>

int	ft_strlen(char *str){
	int counter;
	counter = 0;

	while(str[counter])
		++counter;
		
	return counter;
	
}

int recursion(char *str){

	if (!*str)
		return 0;
	return recursion(str +1) + 1;
	
}


int main(){

	char str[] = "onetwo";
	int count = ft_strlen(str);
	int rec_count = recursion(str);
	
	printf("%d\n", count);
	printf("%d\n", rec_count);

	


	
	return 0;
}