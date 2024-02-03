// Wap to find the reverse array without using another array.
#include<stdio.h>
main()
{
	int i,j,n,size;
	
	printf("Enter the size of Array :\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the element of array :\n");

	for (i=0;i<size;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Reverse Array Elements Are :\n");
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size;j++)
		{
			a[size]=a[i];
			a[i]=a[j];
			a[j]=a[size];
		}
	}
	for (i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
	
}
