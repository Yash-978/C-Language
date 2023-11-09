#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	while(n>=i)
	{
		printf("%d ",n);
		n--;
	}
}
