//3.Write C program to calculate factorial of a number.
#include<stdio.h>
main()
{
	int i,k,sum=1;
	printf("Enter the number :");
	scanf("%d",&k);
	for (i=1;i<=k;i++)
	{
		sum=sum*i;
		
	}
	printf("%d",sum);
}

