//Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
//For example,
//Input:
//Enter the array's size: 5
//
//Enter array's elements:
//a[0] = 2
//a[1] = 4
//a[2] = 1
//a[3] = 3
//a[4] = 7
//
//Output:
//Square of each element:
//4, 16, 1, 9, 49
#include<stdio.h>
#include<string.h>

main()
{
	
	int i,j;
	int a[j];
	printf("Enter the size of array :");
	scanf("%d",&j);
	for (i=0;i<j;i++)
	{
		printf("Enter the value in array a[%d] :",i);
		scanf("%d",&a[i]);
	}
	int *ptr;
	for (i=0;i<j;i++)
	{
		ptr=&a[i];
		printf("The square of a[%d] :\n",*ptr*a[i]);
		
	}
	
}
