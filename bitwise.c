/*Adithyan H
404
Implementing Bitwise Operator*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("Enter First Value: ");
	scanf("%d",&a);
	printf("Enter Second Value: ");
	scanf("%d",&b);
	c=a&&b;
	printf("The value of Bitwise And is: %d\n",c);
	d=a||b;
	printf("The value of Bitwise Or is: %d\n",d);
	e=~a;
	printf("The value of Bitwise Not is: %d\n",e);
	f=a^b;
	printf("The value of Bitwise Xor is: %d\n",f);
	g=a<<b;
	printf("The value of Bitwise LeftShift is: %d\n",g);
	h=a>>b;
	printf("The value of Bitwise RightShift is: %d\n",h);
return 0;
}
