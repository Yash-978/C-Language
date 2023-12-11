#include<stdio.h>
main()
{
	int i,j,check = 0;
	printf("Enter the size of array :");
	scanf("%d",&j);
	int a[j];
	
	for (i=0;i<j;i++)
	{
		printf("Enter the value in array :");
		scanf("%d",&a[i]);
	}

	for(i=0;i<j;i++)
	{
		if (a[i]<0)
		{
			printf("%d",a[i]);
			check = 1;
		}
	}

	if(check==0)
	{
		printf("there is no negative value in array");
	}

}