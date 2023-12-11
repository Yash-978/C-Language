//  Wap to find sum of diagonal element in 2d array.
#include<stdio.h>
main()
{
	int i;
	int j,r,c,sum=0;
	
	printf("Enter the rows in the array :");
	scanf("%d",&r);
			
	printf("Enter the columns in the array :");
	scanf("%d",&c);
	
	int a[r][c];
		
	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter the arrays elements :");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
 	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			 
		}
		printf("\n");
	}

 	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}	 
		}
		printf("the sum of diagonal is %d",sum);
	}

	 
	
}

