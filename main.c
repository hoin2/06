#include <stdio.h>
#include <stdlib.h>

int get_integer()
{
	int n;
	printf("input two numbers:");
	scanf("%d",&n);
	return(n);
}

int combination(int n,int r)
{
	return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int factorial(int j)
{
	int res=1;
	int i;
	
	for(i=1;i<=j;i++)
		res = res*i;
	
	return (res);
}

int main(void)
{
	int a,b;
	int result;
	
	a=get_integer();
	b=get_integer();
	
	result=combination(a,b);
	
	printf("%d",result);
	
	return 0;
}

