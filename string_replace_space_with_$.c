/* Cprogram to replace space with '$' in given array 
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
for(j=0;str[j]!='\0';j++)
{
if(str[j]==' ')
{
str[j]='$';
}
}
printf("%s",str);
getch();
}