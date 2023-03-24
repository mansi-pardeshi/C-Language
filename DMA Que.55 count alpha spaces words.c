/* Que.55 C program to count aplhabets , words and spaces.
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int i=0 ,num_of_char=1;
	int A=0 , s=0 , words=0;
	char *str = NULL; 
	str = (char *)malloc(sizeof(char));
	*(str+0)='\0';
	printf("please enter the string :");
	do
	{
		scanf("%c",&ch);
		if(ch!='\n')
		{
			num_of_char++;
			str = (char *)realloc(str,num_of_char * sizeof(char));
			*(str+i) = ch;
			*(str+i+1) ='\0';
			i++;
		}
	}while(ch!='\n');

	for(i=0;str[i]!='\0';i++)
{
	//Verfy Ascii values 
	if(*(str+i)>=97 && *(str+i)<=122 || *(str+i)>=65 && *(str+i)<=90)
	{
	A++;
	}
	else if(*(str+i)==32)
	{
	s++;
	}
}
words=s+1;
printf("Number of alphabets : %d\n Number of spaces : %d\n Number of words : %d\n",A,s,words);
getch();
}