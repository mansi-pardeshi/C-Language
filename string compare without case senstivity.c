/* Q27. C program which accept string from user and compare without case sensitivity
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,l1=0,l2=0,count=0,l;
char str1[50],str2[50];
printf("Enter first string :\n");
fgets(str1,sizeof(str1),stdin);
printf("Enter second string :\n");
fgets(str2,sizeof(str2),stdin);
//length of both strings
for(i=0;str1[i]!='\n';i++)
{
l1++;
}
for(i=0;str2[i]!='\n';i++)
{
l2++;
}

//convert both strings to lower case
for(i=0;str1[i]!='\0';i++)
{
if(str1[i]>='A' && str1[i]<='Z')
{
str1[i]=str1[i]+32;
}
//printf("%c",str1[i]);
}

for(i=0;str2[i]!='\0';i++)
{
if(str2[i]>='A' && str2[i]<='Z')
{
str2[i]=str2[i]+32;
}
//printf("%c",str2[i]);
}

//check equal or not
if(l1==l2)
{
	l=l1;
	for(i=0;i<=l;i++)
	{
		if(str1[i]==str2[i])
		{
			count++;
		}
		else
			break;
	}
}
if(l=count)
{
	printf("Both strings are equal");
}
else
{
	printf("Both strings are mismatched");
}
getch();
}