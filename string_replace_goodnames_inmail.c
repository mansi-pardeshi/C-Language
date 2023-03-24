/* C program to replace Good Names in mail
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char name[50];
printf("Enter the name:");
fgets(name,sizeof(name),stdin);
printf("Hello ");
for(i=0;name[i]!='\0';i++)
{ 
	if(name[i]!=' ')
	{
		printf("%c",name[i]);
	}
}
getch();
}