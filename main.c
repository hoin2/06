#include <stdio.h>
#include <stdlib.h>


int func1(void);

int main(void) 
{
	int x;

	printf("main x is at %p\n",&x);
	func(x);
	
	return 0;
}

int func(int a)
{
	
	printf("func x is at %p\n",&a);
}
