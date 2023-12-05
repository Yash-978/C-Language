#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	int x=1;
	int sum=1;
//	int y[10]={1,2,3,4,5,6,7,8,9,10};
	
//	printf("%d",y[5]);
	printf("Enter the value of n :");
	scanf("%d",&n);
	while (x<=n)
	{
		sum=sum*x;
		x++;
	}
	printf("%d",sum);
}
