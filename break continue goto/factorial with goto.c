#include<stdio.h>
main()
{
	int i=1,num,a=1;
	printf("Enter any number  :");
	scanf("%d",&num);
	factorial:
	if (i<=num)
	{
		a=a*i;
		i++;
		goto factorial;
	}
	printf("%d",a);
	
}