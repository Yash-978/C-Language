 wap to find factorial of 3 using while loop.
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	int n;
	int factorial=1;
	printf("Enter the value of n :");
	scanf("%d",&n);
	while(i<=n)
	{
		factorial=n*i;
		printf("%d ",factorial);
		i++;
	}
	printf("\ntotal sum is =%d",factorial);
}