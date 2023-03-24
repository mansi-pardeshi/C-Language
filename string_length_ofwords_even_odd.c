/* C program which accepts the sentence from user and print the number of words of even and odd length from that sentence
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,count,even,odd;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
count=0;
i=0;
even=0;
odd=0;
while(str[i]!='\n')
{
	while(str[i]==' ')
	{
	i++;
	}
	count=0;
	while(str[i]!=' ' && str[i]!='\n')
	{
	count++;
	i++;
	}
	if(count!=0)
	{
	if(count%2==0)
	{
	even++;
	}
	else if(count%2!=0)
	{
	odd++;
	}
	}
}
printf("Number of words of even length : %d\n Number of words of odd length : %d",even,odd);
getch();
}