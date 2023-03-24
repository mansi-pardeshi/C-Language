/* C program which accept string from user and accept number then copy last n characters of string into some another string
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j,count=0,cnt,k=0;
char str[50],copy[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
printf("Enter the number of last charcters of given string that you want to copy :\n");
scanf("%d",&n);
i=0;
while(str[i]!='\n')
{
	i++;
	count++;
}
cnt=count-n;
for(j=cnt;str[j]!='\0';j++)
{
	copy[k]=str[j];
	k++;
}
copy[k]='\0';
printf("Last %d characters of given string are : %s",n,copy);
getch();
}