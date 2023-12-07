#include<stdio.h>
main()
{
	int i,n,k;
	printf("Enter the table :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the value :");
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for(k=1;k<=10;k++)
		{
			printf("%d x %d = %d\n",a[i],k,a[i]*k);
		}
		printf("\n");
	}
	
}