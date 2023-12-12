//WAP to given string in reverse.
#include <stdio.h>
main()
{
	char i,j[30],k=0;
	printf("Enter your string :");
	scanf("%s",&j);
	while(j[k]!='\0')
	{
		k++;
	}
	for(i=k;i>=0;i--)
	{
		printf("%c",j[i]);
	}	
}
