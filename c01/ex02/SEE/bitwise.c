/*


learning bitwise ops in c

*/

#include <stdio.h>

int main(int argc, char* argv[])
{

	int r, a, exclusive;

	r = 1 & 0;
	a = 1 | 0;
	exclusive = 1 ^ 0;
		
	printf("result of 1 & 0: %d\n",r);
	printf("result of 1 | 0: %d\n", a);
	printf("result of 1 ^ 0: %d\n", exclusive);
	return 0;
}






