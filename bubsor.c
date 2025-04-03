/*Adithyan H
404
Bubble Sort of elements in an array */
#include<stdio.h>
int main()
{
int n,temp;
printf("Enter size of array : ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
	printf("Enter element %d : ",i+1);
	scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
		if (a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("The Array Sorted Using Bubble Sort.\n");
for(int i=0;i<n;i++)
	printf("Element %d : %d\n",i+1,a[i]);
return 0;
}
