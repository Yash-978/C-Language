// WAP to get the array and print in descending order.
#include<stdio.h>
main()
{
	int i;
	int j;
	
	int a[7]={5,3,7,9,4,2,1};
	int temp=0;
	for(i=0;i<7;i++)
	{
		for (j=i+1;j<7;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		printf("%d",a[i]);
	}
	
	
}

