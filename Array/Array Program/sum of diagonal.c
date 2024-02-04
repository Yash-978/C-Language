#include<stdio.h>
main()
{
	int i,j,k,l,sum=0;
	printf("Enter the raw in array :");
	scanf("%d",&k);
	printf("Enter the column in array :");
	scanf("%d",&l);
	int a[k][l];
	for (i=0;i<k;i++)
	{
		for (j=0;j<l;j++)
		{
			printf("Enter the Elements in A[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for (i=0;i<k;i++)
	{
		for (j=0;j<l;j++)
		{
			if (i==j)
			{
				printf("%d  ",a[i][j]);
				sum=sum+a[i][j];
			}
		}
	}
	printf("The sum of Diagonal is %d :",sum);
	
}
