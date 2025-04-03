                   /*Adithyan H
404
Fibinocci Series Upto To N*/
#include<stdio.h>
int main()
{
int n,f=0,s=1,nx;
printf("Enter a Number: ");
scanf("%d",&n);
printf("The Fibinocci Series Upto To %d :\n ",n);
printf("%d\n",f);
printf("%d\n",s);
for(int i=1;i<=n;i++){
nx=f+s;
f=s;
s=nx;
printf("%d\n",nx);
}
return 0;
}
