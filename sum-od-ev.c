/*Adithyan H
404
Sum of Odd & Even Digits of User Input Number*/
#include<stdio.h>
int main()
{
int n,digit,sum_odd=0,sum_even=0;
printf("Enter a Number: ");
scanf("%d",&n);
while(n>0)
{
digit=n%10;
if(digit%2==0)
sum_even+=digit;
else
sum_odd+=digit;
n/=10;
}
printf("Sum of even digits: %d\n",sum_even);
printf("Sum of odd digits: %d\n",sum_odd);
return 0;
}
