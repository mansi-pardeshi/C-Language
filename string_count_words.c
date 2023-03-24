/* C program which accepts the sentence from user and print number of words from that sentence
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count;
char str[50];
printf("Enter the string :\n");
fgets(str,sizeof(str),stdin);
count=0;
i=0;
while(str[i]!='\0')
{
while(str[i]==' ')
{
i++;
}
if(str[i]!=' ' && str[i]!='\0')
{
count++;
}
while(str[i]!=' ' && str[i]!='\0')
{
i++;
}
}
printf("number of words : %d",count);
getch();
}