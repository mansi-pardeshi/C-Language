/* Q17. C program to convert the string from upper case to lower case.
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char str[50];
printf("Enter a string to convert in lower case :\n");
fgets(str,sizeof(str),stdin);
printf("Converted string is :\n");
i=0;
while(str[i]!='\0')
{
if(str[i]>='A' && str[i]<='Z')
{
str[i]=str[i]+32;//add diff between capital and samll ascii value i.e32 
}
printf("%c",str[i]);
i++;
}
getch();
}