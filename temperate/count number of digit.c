//3. Write C program to count number of digits in a number.
#include<stdio.h>
main()
{
	int i=0,k;
	printf("Enter the number :");
	scanf("%d",&k);
	while (k>0)
	{
		k/=10;
		i++;
	}
	printf("%d",i);
}

