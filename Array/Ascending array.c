#include<stdio.h>
main()
{
	int j;
	int i;
	int a[6]={9,6,7,8,5,2};
	
	for (i=0;i<6;i++)
	{
		for (j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}printf("%d ",a[i]);
	}
}

