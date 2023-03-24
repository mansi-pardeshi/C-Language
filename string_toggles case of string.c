/* Q.18 C program which toggles the case of string
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
i=0;
while(str[i]!='\0')
{
	while(str[i]==' ')
	{
		i++;
	}
	while(str[i]!=' ' && str[i+1]==' ')
	{
		printf(" ");
		break;
	}
	
if(str[i]>='A' && str[i]<='Z')
{
str[i]=str[i]+32;
}
else if(str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32;
}
printf("%c",str[i]);
i++;
}
getch();
}