/* C program which string from the user then reverse the string till n characters without taking another string
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i, count,j,n,cnt;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
printf("Enter value of N :");
scanf("%d",&n); 

//reverse string till n
for(i = n ; i >= 0 ; i--)
{
printf("%c",str[i]);
}
//print remaining string after reverse string
for(i = n+1 ; str[i] != '\0' ; i++)
{
printf("%c",str[i]);
}

getch();
}