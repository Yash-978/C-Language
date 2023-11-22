#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	int n;
	int factorial=1;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
		
		
	}
	printf("\n%d",factorial);
}