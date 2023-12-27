//3. Factorial and sum using recusrion.
#include<stdio.h>
int factorial(int f)
{
	
	if (f==1)
	{
		return 1;
	}
	return f * factorial(f-1);
}
void main()
{
	int i;
	printf("Enter the value :");
	scanf("%d",&i);
	printf("Factorial of %d is %d.",i,factorial(i));
}
