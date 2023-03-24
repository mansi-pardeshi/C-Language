/* C program which accepts the string from user which contains character from b to y  
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
//for(i=0;str[i]!='\0';i++)
i=0;
while(str[i]!='\0')
{
	while(str[i]==' ')
	{
	i++;
	}
	while(str[i]!=' ' && str[i]!='\0')
	{
if(str[i]=='a' || str[i]=='z')
{
str[i]='\0';
}
i++;
	}
}
printf("%s",str);
getch();
}