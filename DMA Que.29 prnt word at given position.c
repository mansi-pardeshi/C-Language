/* Que.29. C program to accept sentence and position from user and print word at that position using DMA
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int j=0 , count=0 , pos;
	int i=0 ,num_of_char=1;
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

	printf("Enter position of word you want :\n");
	scanf("%d",&pos);

	while(*(str+j) != '\0')
	{
		while(*(str+j) == ' ')
		{
			j++;
		}
		if(*(str+j) != ' ' && *(str+j) != '\n')//count words
		{
			count++;
		}
	
		while(*(str+j) != ' ' && *(str+j) != '\0')
		{
			if(count==pos)
			{
				printf("%c",*(str+j));
			}
			j++;
		}
	}
	getch();
}