#include<stdio.h>
main()
{
	int i;
	printf("Enter a integer number\n");
	scanf("%d",&i);
	(i%2 == 0)?printf("%d is even number.\n",i):printf("%d is Odd number.\n",i);
}