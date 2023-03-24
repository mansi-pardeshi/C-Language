/* Que.27 C program to accept sentence from user and print the last word of that sentence from that sentence using DMA
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int r=0 , count=0 , j;
	int i=0 ,num_of_char=1;
	char *rev = NULL; 
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

	rev = (char *)malloc(num_of_char * sizeof(char));

	i=0;
	while(*(str+i) != '\0')//count length of string
	{
		count++;
		i++;
	}
	count--;
	for(j = count ; *(str+j)!=' ' ; j--)//reverse till last space i.e space before last word
	{
		*(rev+r) = *(str+j);
		r++;
	}
	*(rev+r) = '\0';
	for(i=r-1 ; i>=0 ; i--)//reverse the above reverse string
	{
		printf("%c",*(rev+i));
	}
getch();
}