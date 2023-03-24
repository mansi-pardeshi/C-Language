/* Q16. C program which accepts the sentence from user and position from the user and print the word at that position
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,count,pos;
char str[50];
printf("Enter the string :\n");
fgets(str,sizeof(str),stdin);
printf("Enter position\n");
scanf("%d",&pos);
count=0;
i=0;
while(str[i]!='\0')
{
	while(str[i]==' ')
	{
		i++;
	}
if(str[i]!=' ' && str[i]!='\n')//count words
{
count++;
}
while(str[i]!=' ' && str[i]!='\0')
{
if(count==pos)
{
printf("%c",str[i]);
}
i++;
}
}
//printf(" count is %d",count);
getch();
}