//Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
//For example,
//Output:
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 1
//Enter the first number: 5
//Enter the second number: 3
//Addition of 5 and 3 is 8
//
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 4
//Enter the first number: 10
//Enter the second number: 5
//Division of 10 and 5 is 2
//
//Press 1 for +
//Press 2 for -
//Press 3 for *
//Press 4 for /
//Press 5 for %
//Press 0 for the exit
//
//Enter your choice: 0
#include<stdio.h>
float add(float a, float b)
{
	printf("%f + %f = %f\n",a,b,a+b);
	
}
float subtract(float a, float b)
{
	printf("%f - %f = %f\n",a,b,a-b);
	
}
float multiply(float a, float b)
{
	printf("%f * %f = %f\n",a,b,a*b);
	
}
float division(float a, float b)
{
	printf("%f / %f = %f\n",a,b,a/b);
	
}
int reminder(int a, int b)
{
	printf("%d %% %d = %d\n",a,b,a%b);
	
}

main()
{
	while (1)
	{
		
	char choice;
	printf("Enter 0 for Exit\n");
	printf("Enter 1 for +\n");
	printf("Enter 2 for -\n");
	printf("Enter 3 for *\n");
	printf("Enter 4 for /\n");
	printf("Enter 5 for %\n");
	printf("Enter your choice between '+,-,*,/' :\n");
	scanf("%d",&choice);
	if (choice == 0)
	{
		break;
	}
	else
	{
	int a,b;
	printf("Enter the value of a :\n");
	scanf("%d",&a);
	printf("Enter the vlaue of b :\n");
	scanf("%d",&b);
	
	
	
	
		switch (choice)
	{
		
		case 1 : add (a,b);
		break;
		case 2 : subtract (a,b);
		break;
		case 3 : multiply (a,b);
		break;
		case 4 : division (a,b);
		break;
		case 5 : reminder (a,b);
		break;
	}
	}
	}
	
}
