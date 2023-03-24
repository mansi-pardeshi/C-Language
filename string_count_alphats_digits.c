/* C program which accepts the sentence from user and print the number of small letters ,capital letters,digits and spaces from that sentence 
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,A,s,d;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
A=0;
a=0;
s=0;
d=0;
for(i=0;str[i]!='\0';i++)
{
	//Verfy Ascii values 
	if(str[i]>=97 && str[i]<=122)
	{
	a++;
	}
	else if(str[i]>=65 && str[i]<=90)
	{
	A++;
	}
	else if(str[i]>=48 && str[i]<=57)
	{
	d++;
	}
	else if(str[i]==32)
	{
	s++;
	}
}
printf("Number of capital letters : %d\n Number of small letters : %d\n Number of digits : %d\n Number of spaces : %d\n",A,a,d,s);
getch();
}