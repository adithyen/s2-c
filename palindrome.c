/*Adithyan H
404
To check palindrome or not*/
#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int l1=0,c=0;
printf("Enter the string: ");
gets(a);
for (int i=0;a[i]!='\0';i++){
	l1+=1;
	}

for (int i=0;i<=l1;i++){
	if(a[i]==a[l1-i-1])
		c=1;
	else
		c=0;
		break;
	}
if(c==1)
	printf("The given string is a palindrome");
else
	printf("The given string is not a palindrome");
return 0;
}
