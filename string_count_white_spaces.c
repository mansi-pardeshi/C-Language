/* C program which accepts the sentence from user and print the number of white spaces from that sentence
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,count;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
count=0;
for(i=0;str[i]!='\0';i++)
{
	//Verfy Ascii value
	if(str[i]==32)
	{
	count++;
	}
}
printf("Number of capital letters : %d\n",count);
getch();
}