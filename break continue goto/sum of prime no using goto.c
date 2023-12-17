#include<stdio.h>
main()
{
	int i=2,num,sum=0;
	prime :
	if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%11!=0 || i==2 || i==3 || i==5 || i==7 || i==11)
	{
		printf("%d ",i);
		sum =i+sum;
	}
	i++;
	
	
	if (i<=50)
	{
		goto prime;
	}
	printf("\nThe Sum of prime number between 1 to 50 is %d",sum);
	
}