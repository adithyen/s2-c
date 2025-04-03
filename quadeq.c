/*Adithyan H
404
Root of a Quadratic Equation*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float r1,r2,cr1;
	printf("Enter coefficient of x^2: ");
	scanf("%d",&a);
	printf("Enter coefficient of x: ");
	scanf("%d",&b);
	printf("Enter value of constant: ");
	scanf("%d",&c);
	d=(b*b)-4*a*c;
	if(d>0)
	{
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("The Roots of Quadratic Eq are: %f & %f\n",r1,r2);
	}
	else if(d=0)
	{
	cr1=-b/(2*a);
	printf("The Common Root of Quadratic Eq is: %f\n",cr1);
	}
	else	
	{
	printf("The Roots of Quadratic Eq are real \n");
	}
return 0;
}
