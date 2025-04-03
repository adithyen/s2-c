/*Adithyan H
404
Reversing Elements In An Array Using Functions*/
#include<stdio.h>
void rev(int a[],int); 
int main()
{
int n;
printf("Enter a size of array : ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
printf("Enter element %d : ",i+1);
scanf("%d",&a[i]);
}
rev(a,n);
for(int i=0;i<n;i++){
printf("Element %d : %d\n",i+1,a[i]);
}
return 0;
}
void rev(int a[],int n){
for(int i=0;i<n/2;i++){
int temp;
temp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=temp;
}
return;
}
