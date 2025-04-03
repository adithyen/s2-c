/*Adithyan H
404
Largest and Smallest in an array */
#include<stdio.h>
int main()
{
int n,l=0,s=0;
printf("Enter a size of array : ");
scanf("%d",&n);
int a[n];
for(int i=1;i<=n;i++){
printf("Enter element %d : ",i);
scanf("%d",&a[i]);
}
l=a[1];
s=a[1];
for(int i=1;i<=n;i++){
if (a[i]<s)
s=a[i];
if (a[i]>l)
l=a[i];
}
printf("The Smallest no: in array : %d\n",s);
printf("The Largest no: in array : %d\n",l);
return 0;
}
