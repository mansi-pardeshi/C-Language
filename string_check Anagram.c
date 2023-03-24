/* C program to check whether given strings are Anagram strings or not
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,flag=0;
char str[50],ch[50];
int l1=0,l2=0,l;
printf("Enter a first string :\n");
fgets(str,sizeof(str),stdin);
printf("Enter a second string :\n");
fgets(ch,sizeof(ch),stdin);
for(i=0;str[i]!='\n';i++)
{
		l1++;
}
for(j=0;ch[j]!='\n';j++)
{
		l2++;
}
if(l1==l2)
{

}
if(flag==1)
{
	printf("Given string is anagram");
}
else if(flag==0)
{
	printf("Given string is not anagram");
}
	
getch();
}