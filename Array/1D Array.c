//Write a Program to find the average of a 1D array.
#include<stdio.h>
main()
{
	int x,y;
	float sum=0;
	printf("Enter the size of array :");
	scanf("%d",&x);
	int a[x];
	
	for (y=0;y<=x;y++)
	{
		printf("Enter the value a[%d] =",y);
		scanf("%d",&a[y]);
	}
	
	for (y=0;y<=x;y++)
	{
		sum = sum+a[y];
	}
	 printf("The Average of Array = %.f\n",sum/2);
	
	
}

