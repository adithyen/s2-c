/*Adithyan H
404
Concatenate two fns without str fn*/
#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int l1=0,l2=0;
printf("Enter the two strings: ");
fgets(a,100,stdin);
fgets(b,100,stdin);
for (int i=0;a[i]!='\0';i++){
	l1+=1;
	}
l1=l1-1;
for (int i=0;b[i]!='\0';i++){
	l2+=1;
	}
l2=l2-1;
for (int i=0;b[i]!='\0';i++){
	a[l1+i]=b[i];
	}
printf("%s",a);
return 0;
}
