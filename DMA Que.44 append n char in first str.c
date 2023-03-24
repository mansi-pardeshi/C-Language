/* Que.42  C program which accepts two strings from user and append second string after first string using DMA
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch , ch2;
	int n ;
	int i=0 ,num_of_char=1 , j;
	int len , len2 , length=0;
	char *str2 = NULL;
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

	str2 = (char *)malloc(sizeof(char));
	*(str2+0)='\0';
	num_of_char = 1;
	i=0;
	printf("please enter the string :");
	do
	{
		scanf("%c",&ch);
		if(ch!='\n')
		{
			num_of_char++;
			str2 = (char*)realloc(str2,num_of_char * sizeof(char));
			*(str2+i) = ch;
			*(str2+i+1) ='\0';
			i++;
		}
	}while(ch!='\n');
	
	printf("How many characters of second string you want to append after first : \n");
	scanf("%d",&n);
	n=n-1;

		printf("Your first string is :\n");
	for(i=0;*(str+i) !='\0';i++)
	{
		printf("%c",*(str+i));
	}
	printf("\n");
	len = i;

	printf("Your second string is :\n");
	for(i=0;*(str2+i) !='\0';i++)
	{
		printf("%c",*(str2+i));
	}
	printf("\n");
	len2 = i;

	length = len + n;

	str = (char*)realloc(str,length * sizeof(char));
	
	j=0;
	for(i=len ; i<=length ; i++)
	{
		*(str+i) = *(str2+j);
		j++;
	}
	*(str+i) = '\0';

	printf("Appended string is :\n");
	for(i=0;*(str+i) !='\0';i++)
	{
		printf("%c",*(str+i));
	}
	getch();
}