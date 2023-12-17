#include<stdio.h>
main()
{
	int i,num;
	printf("Enter number  between 1 to 10 :");
	scanf("%d",&num);
	for (i=1;i<=10;i++)
	{
		printf("%d",i);
		if (i==num)
		{
			break;
		}
	}
}