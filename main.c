#include <stdio.h>
#include <stdlib.h>


int print_star();

int main(void) 
{
	print_star();
	print_star();
	print_star();

	return 0;
}

int print_star()
{
	int i;
	
	for(i=0;i<10;i++)
		printf("*");
}
