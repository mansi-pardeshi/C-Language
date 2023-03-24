#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i=0 , num_of_char =1 , j=0 , count=0;
	char ch;
	char *str = NULL;
	str =(char *)malloc(sizeof(char));
	*(str+0) = '\0';
	printf("Enter a string :\n");
	do
	{
		scanf("%c",&ch);
		if(ch != '\n')
		{
			num_of_char++;
			str = (char *)realloc(str , num_of_char * sizeof(char));
			*(str+i) = ch;
			*(str+i+1) = '\0';
			i++;
		}
	}while(ch != '\n');

	while(*(str+j) != '\0')
	{
		while(*(str+j) == ' ')
		{
			j++;
		}
		if(*(str+j) != ' ' && *(str+j) != '\0')
		{
			count++;
		}
		while(*(str+j) != ' ' && *(str+j) != '\0')
		{
			j++;
		}
	}
	printf("number of words : %d",count);

	getch();
}