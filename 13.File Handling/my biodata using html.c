#include<stdio.h>
main()
{
	int age;
	char name[50],address[50],email[50];
	FILE *html = fopen("Bio-data.html","w");
	printf("Enter your name :");
	gets(name);
	printf("Enter your address :");
	gets(address);
	printf("Enter your Email Id :");
	gets(email);
	printf("Enter your age :");
	scanf("%d",&age);
	
	fprintf(html,"<html>");
	fprintf(html,"<head>");
	fprintf(html,"<title> My Bio-Data </title>");
	fprintf(html,"</head>");
//	fprintf(html,"<body bgcolor= "#FF00FF>"");                                                
//	fprintf(html,"<p>Personal information <font size> = "20"></p><br>");
	fprintf(html,"<p>Name           : %s</p>",name);
	fprintf(html,"<p>Age            : %d</p>",age);
	fprintf(html,"<p>Address        : %s</p>",address);
	fprintf(html,"<p>Email Address  : %s</p><br>",email);
//	fprintf(html,"<h2>Education background <font size = "20"></font></h2><br>");
	fprintf(html,"<p>Skill</p>");
//	fprintf(html,"<h3>Skill <font size = "20"></font></h3><br>");
	fprintf(html,"<p>Coding</p>");
	fprintf(html,"<p>Communication</p>");
	fprintf(html,"<p>Leadership</p>");
	fprintf(html,"<p>Active Listioning</p>");
	fprintf(html,"</body>");
	fprintf(html,"</html>");
	
	return 0;
	
}
