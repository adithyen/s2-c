/*Adithyan H
404
Swaping two numbers using fn*/
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
int a,b;
printf("Enter element 1 : ");
scanf("%d",&a);
printf("Enter element 2 : ");
scanf("%d",&b);
swap(&a,&b);
printf("Element 1: %d\n",a);
printf("Element 2: %d\n",b);
return 0;
}
void swap(int *x,int *y){
int temp;
temp=*x;
*x=*y;
*y=temp;
return ;
}
