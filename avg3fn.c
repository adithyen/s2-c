/*Adithyan H
404
Average of 3 Numbers Using Function*/
#include<stdio.h>
float avg(float,float,float);
int main()
{
	float a,b,c;
	float x;
	printf("Enter First Value: ");
	scanf("%f",&a);
	printf("Enter Second Value: ");
	scanf("%f",&b);
	printf("Enter Third Value: ");
	scanf("%f",&c);
	x=avg(a,b,c);
	printf("The value of Average is: %f",x);
return 0;
}
float avg(float q,float w,float r){
float x;
x=(q+w+r)/3;
return x;
}

