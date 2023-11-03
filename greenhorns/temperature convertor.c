#include<stdio.h>
#include<conio.h>
main()
{

	float celsius;//Write C program to convert temperature from degree Celsius to Fahrenheit.(f=(9.5*c)+32)
	float f=0;
	 
	printf("temperature(in celsius) :");
	scanf("%f",&celsius);
	
	f=(celsius*9.5)+32;
	 
	printf("celsius to fehrenheit is %.2f\n",f);
	
}
