/* Q31. C program which accept string from user and check whether string is pallindrome or not
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,count,j,k,cnt=0;
char str[50],temp[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
count=0;
//length of string
for(j=0;str[j]!='\0';j++)
{
count++;
}
count--;
//printf("count is %d",count);
i=0;
//reverse string
for(j=count;j>=0;j--)
{
temp[i]=str[j];
i++;
}
//temp[i]='\n';
//printf("%s",temp);
for(i=0;i<=count;i++)
{
	if(temp[i+1]==str[i])
	{
		cnt++;
	}
	else
		break;
}
if(count!=cnt)
{
	printf("Given string is not pallindrome\n");
}
else if(count==cnt)
{
	printf("Given string is pallindrome\n");
}
getch();
}