//3.Write a program in C to count the frequency of each element of an array.
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
	
	printf("Number of Times array Elements Repeats :\n");
	int f=1;
	for (i=0;i<size;i++)
	{
		for (j=i+1;j<size;j++)
		{
			if (a[i]==a[j])
			{
				f++;
				a[j]=0;				
			}	
		}
		if (a[i]!=0)
		{
			printf("%d ---- %d Times.\n",a[i],f);
		}
		f=1;
		
	}
	

			
	
	
	
}
