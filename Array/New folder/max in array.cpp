#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the table :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the value a[%d] :",i);
		scanf("%d",&a[i]);
	}
	int max=a[0];
	
	for (i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nmaximum is %d",max);
}