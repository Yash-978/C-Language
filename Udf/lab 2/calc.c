#include<stdio.h>
void calculater()
{
	int a,b;
	char choose;
	printf("Enter your choice between '+,-,*,/' :");
	scanf("%choose",&choose);
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	switch (choose)
	{
		case '+' :  printf("%d %c %d = %d\n",a,choose,b,a+b);
		break;
		case '-' :  printf("%d %c %d = %d\n",a,choose,b,a-b);
		break;
		case '*' :  printf("%d %c %d = %d\n",a,choose,b,a*b);
		break;
		case '/' :  printf("%d %c %d = %d\n",a,choose,b,a/b);
		break;
		default :printf("Enter a possible value for this calculater.");
	}
	calculater();

}
main ()
{
	calculater ();
}
	
