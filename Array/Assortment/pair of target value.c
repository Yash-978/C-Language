// 6. Write a program in C to find a pair of target value given by user.
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
	printf("Enter the Target value :");
	scanf("%d",&n);
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size;j++)
		{
			if (a[i]+a[j]==n)
			{
				printf("{%d , %d}\n",a[i],a[j]);
			}
			
		}
	
		
	}
	
}

