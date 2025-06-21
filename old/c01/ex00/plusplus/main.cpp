#include <iostream>
using namespace std;

void ft_ft(int *nbr)
{
		*nbr = 42;
}
	

int main() 
{
	
	int *point;
	int nbr = 21;
	point = &nbr;
	
	ft_ft(point);
	cout << nbr;
	

	

	return (0);


	
}