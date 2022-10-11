#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a,int b)
{
	return a+b;
}

int square(int n)
{
	return n*n;
}

int get_max(int x,int y)
{
	if(x>y)
		return(x);
	else
		return(y);
}

int main(void)
{
	int a;
	int b;
	int c;
	
	a=sumTwo(2,3);
	b=square(2);
	c=get_max(3,6);
	
	printf("%d,%d,%d",a,b,c);
	
	return 0;
	
}

