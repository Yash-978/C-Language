//WAP to convert given string in uppercase.
#include<stdio.h>
main()
{
	int j,i;
	printf("Enter the string size :");
	scanf("%d",&j);
	char upp[j];
	char lowercase[j];
	
	printf("Enter your string.");
	scanf("%s",&upp);
	
	for(i=0;i<j;i++)
	{
		if (upp[i]>=97 && 122>=upp[i])
		{
			upp[i]=upp[i]-32;
		}
	}
	printf("%s",upp);
	
	
	
	
}
