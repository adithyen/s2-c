/*Adithyan H
404
Sum of Digits of User Input Number*/
#include<stdio.h>
int main()
{
int n,digit,sum=0;
printf("Enter a Number: ");
scanf("%d",&n);
while(n>0)
{
digit=n%10;
sum+=digit;
n/=10;
}
printf("Sum of digits: %d\n",sum);
return 0;
}
