/*Adithyan H
404
Factorial of a Number Using Function*/
#include<stdio.h>
int fact(int);
int main()
{
int n,f;
printf("Enter a Number: ");
scanf("%d",&n);
f=fact(n);
printf("The factorial of %d :\n",f);
return 0;
}
int fact(int n){
int fact=1;
for(int i=1;i<=n;i++){
fact=fact*i;
}
return fact;
}
