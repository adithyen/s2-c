/*Adithyan H
404
Frequency of each element in an array */
#include<stdio.h>
int main()
{
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
int a[n+2],f[n+2],u[n+2],c[n+2];
for(int i=1;i<=n;i++){
printf("Enter element %d : ",i);
scanf("%d",&a[i]);
}
for(int i=1;i<=n;i++){
	f[i]=0;
	c[i]=0;
}
for(int i=1;i<=n;i++){
	for(int j=2;j<=n;j++){
	if(i==j)
		j=j+1;
	if(a[i]=a[j]&&c[i]<2){
	u[i]=a[i];
	c[i]=c[i]+1;}
	}
}

for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		if(a[i]==a[j])
			f[i]=f[i]+1;
	}
}
printf("[");
for(int i=1;i<=n;i++){
printf("%d ",u[i]);
}
printf("]");
return 0;
}
