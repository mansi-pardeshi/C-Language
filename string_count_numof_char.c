/* Q3. C program to count the number of characters in the string
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int count,i;
char str[50];
printf("Enter a string : \n");
fgets(str,sizeof(str),stdin);//get the string input from user
count=0;
i=0;
while(str[i]!='\0')//increment till null character
{
count++;
i++;
if(str[i]==' ')
{
	count--;
}
}
count--;
printf("Length of string is : %d",count);
getch();
}