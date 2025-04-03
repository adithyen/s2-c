/*Adithyan H
404
Multiplication Table of a Number*/
#include<stdio.h>
int main()
{
int n,digit,sum=0;
printf("Enter a Number: ");
scanf("%d",&n);
for(int i=1;i<=10;i++)
printf("%d x %d = %d\n",n,i,(i*n));
return 0;
}
