/* Q32. C program which accepts the sentence from user and print the number of alphabets,words and spaces from that sentence 
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,A,s,words,j;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
A=0;
s=0;
words=0;
for(i=0;str[i]!='\0';i++)
{
	//Verfy Ascii values 
	if(str[i]>=97 && str[i]<=122 || str[i]>=65 && str[i]<=90)
	{
	A++;
	}
	else if(str[i]==32)
	{
	s++;
	}
	else if(str[i]!=' ' && str[i]!='\n')
	{
		words++;
	}
}
words=s+1;
printf("Number of alphabets : %d\n Number of spaces : %d\n Number of words : %d\n",A,s,words);
getch();
}