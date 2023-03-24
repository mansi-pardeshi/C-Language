/* C program which accept string from user and copy that string in anather string
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int j;
char str[50],copy[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
	for(j=0;str[j]!='\0';j++)
	{
		copy[j]=str[j];
	}
	copy[j]='\0';
	printf("Copied string is : %s",copy);
getch();
}