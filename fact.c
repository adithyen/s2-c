/*Adithyan H
404
Factorial of a Number*/
#include<stdio.h>
int main()
{
int n,fact=1;
printf("Enter a Number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
fact=fact*i;
}
printf("The factorial of %d :\n",fact);
return 0;
}
