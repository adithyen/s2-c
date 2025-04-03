/*Adithyan H
404
Length of string without using function*/
#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int count=0;
printf("Enter your string: ");
fgets(s,100,stdin);
for (int i=0;s[i]!='\0';i++){
	count+=1;
	}
	count=count-1;
printf("length: %d ",count);
return 0;
}
