#include<stdio.h>

int somme(int a, int b)
{
	int result = 0;
	result = a + b;
	printf("%d", result);
	printf("\n");
	return result;
}

int main()
{
	int a = 1;
	int b = 2;
	
	somme(a, b);
}
