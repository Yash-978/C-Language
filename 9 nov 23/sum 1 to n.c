#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	int n;
	int sum;
	printf("Enter the value of n :");
	scanf("%d",&n);
	while(n>=i)
	{
	sum=n+i;
	printf("%d ",i);
	i++;
	}
	printf("\ntotal sum =%d",sum);
}
