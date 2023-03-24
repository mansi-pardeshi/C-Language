/* Que.50 C program to accept string from user and then accept range and reverse the string in that range without taking anather string
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
	int r1 , r2 ;
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
	 
	printf("Enter first range :\n");
	scanf("%d",&r1);
	printf("Enter second range :\n");
	scanf("%d",&r2);

	//print string till the starting position of reverse
	for(i = 0 ; i <= r1-1 ; i++)
	{
		printf("%c",*(str+i));
	}
	//reverse string in between range
	for(i = r2 ; i >= r1 ; i--)
	{
		printf("%c",*(str+i));
	}
	//print remaining string after reverse string
	for(i = r2+1 ; *(str+i) != '\0' ; i++)
	{
		printf("%c",*(str+i));
	}
	getch();
}