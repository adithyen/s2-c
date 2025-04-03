/*Adithyan H
404
LCM of Two Number from User Input*/
#include<stdio.h>
int main()
{
int n,m,l=1;
printf("Enter Number 1: ");
scanf("%d",&n);
printf("Enter Number 2: ");
scanf("%d",&m);
int a=n,b=m;
for (int i=2;i<=m;i)
{
if(m%i==0&&n%i==0)
{
l=l*i;
m=m/i;
n=n/i;
}
else if((m%i==0|n%i==0)){
if(m%i==0)
m=m/i;
else
n=n/i;
l=l*i;
}
else
i=i+1;
}
printf("LCM of %d and %d is : %d\n",a,b,l);
return 0;
}
