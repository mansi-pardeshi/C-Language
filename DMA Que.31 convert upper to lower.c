/* Que.31 C program to accept string from user and convert it from upper case to lower case using DMA
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int i=0 ,num_of_char=1 , j=0 ;
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
	
	printf("Converted lower case string is : \n");
	while(*(str+j) != '\0')
	{
		if(*(str+j) >= 'A' && *(str+j) <= 'Z')
		{
			*(str+j) = *(str+j) + 32;//add diff between capital and samll ascii value i.e32 
		}
		printf("%c",*(str+j));
		j++;
	}
	getch();
}