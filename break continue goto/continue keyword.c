#include<stdio.h>
main()
{
	int i,num;
	printf("Enter number between where you want to exit :");
	scanf("%d",&num);
	for (i=1;i<=10;i++)
	{
		
		if (i==num)
		{
			continue;
		}
		printf("%d ",i);
	}
}