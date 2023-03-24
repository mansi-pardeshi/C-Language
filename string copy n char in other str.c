/* C program which accept string from user and copy first n characters into some destination string
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
char str[50],copy[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
printf("Enter how many characters to copy :\n");
scanf("%d",&n);
for(i=0;i<=n-1;i++)
	{
		copy[i]=str[i];
	}
	copy[i]='\0';
	printf("First %d characters in a string are : %s",n,copy);
getch();
}