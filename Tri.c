/*Adithyan H
404
Type of Triangle*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter First Value: ");
	scanf("%f",&a);
	printf("Enter Second Value: ");
	scanf("%f",&b);
	printf("Enter Third Value: ");
	scanf("%f",&c);
	printf(a==b&&b==c?"Equilateral Triangle":a==b||b==c||c==a?"Iso Tri":"Scalene Tri");	
return 0;
}
