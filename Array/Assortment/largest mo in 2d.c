//7. Write a C program to find the largest number in array.[2D]
#include<stdio.h>
main()
{
	int k;
	printf("Enter the size of row and column :");
	scanf("%d",&k);
	
	printf("Enter Elements of Array :\n");
	int i,j,a[k][k];
	for (i=0;i<k;i++)
	{
		for (j=0;j<k;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
		}
		printf("\n");
	}
	int large ;
	for (i=0;i<k;i++)
	{
		for (j=0;j<k;j++)
		{
			if (large<a[i][j])
			{
				large=a[i][j];
				
					
			}	
		}
	}
	printf("\nLarge Number %d ",large);
	
	
}
