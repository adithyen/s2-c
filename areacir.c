/*Adithyan H
404
Area Of Circle*/
#include<stdio.h>
#define pi 3.14
int main()
{
float r,area;
printf("Enter Radius Of The Circle: ");
scanf("%f",&r);
area=pi*r*r;
printf("The Area Of Circle Having Radius %.2f is : %.5f",r,area);
return 0;
}
