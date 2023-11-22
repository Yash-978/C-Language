#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);//20
	for(i=1; n>=i; n--)
	{
	  	if(n%2==0)
	  	 {
	  	 	printf("%d ",n);
		}

	}
}