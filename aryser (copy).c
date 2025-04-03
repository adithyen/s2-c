/*Adithyan H
404
Sesrch for an element in an array */
#include<stdio.h>
int main()
{
int n,k,c=0,p;
printf("Enter the size of array : ");
scanf("%d",&n);
printf("Enter key element to be searched : ");
scanf("%d",&k);
int a[n];
for(int i=1;i<=n;i++){
	printf("Enter element %d : ",i);
	scanf("%d",&a[i]);
}
for(int i=1;i<=n;i++){
	if (a[i]==k)
	{
		c=1;
		p=i;
	}
}
if (c==1)
	printf("The element %d was found at position %d in array.\n",k,p);
else
	printf("The element %d was not found in the array.\n",k);
return 0;
}
