#include<stdio.h>
main()
{
	int i=1,num,sum=0;
	printf("Enter any number  :");
	scanf("%d",&num);
	sum:
	if (i<=num)
	{
		sum=sum+i;
		i++;
		goto sum;
	}
	printf("%d",sum);
	
}