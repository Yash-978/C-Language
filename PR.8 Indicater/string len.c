#include<stdio.h>
main()
{
	char string_l[50];
	int l;
	printf("Enter the string :");
	gets(string_l);
	l=strlen(string_l);
	int *ptr = &string_l;
	printf("Length of the string : %d\n",*ptr);
	printf("Length of the string : %d",ptr);
	
	
}
