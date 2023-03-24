/* Que.3 C program to accept string with multiple spaces from user and print it with the single space using DMA
* Owner : Mansi Pardeshi.
* Batch :PPA9 
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i=0 , j;
	int num_of_char =1;
	char ch;
	char *str = NULL;
	//allocating memory dynamically to one character in string i.e \0
	str = (char *)malloc(sizeof(char));
	*(str+0) = '\0';
	printf("enter string\n");
	do
	{
		scanf("%c",&ch);
		if(ch != '\n')
		{
			num_of_char++;//if condition is true then increment num_of_char
			//reallocating memory dynamically to n number of character in string one by one
			str = (char *)realloc(str, num_of_char * sizeof(char));
			*(str+i) = ch;//storing each character in stringat ith location
			*(str+i+1) = '\0';
			i++;//increament i
		}
	}while(ch != '\n'); //execute loop upto \n

	j=0;
	while(*(str+j)!='\0')
	{
		while(*(str+j)==' ')
		{
			j++;
		}
		while(*(str+j)!=' ' &&  *(str+j)!='\0')
		{
			printf("%c",*(str+j));
			j++;
		}
		printf(" ");
	}
	getch();
}