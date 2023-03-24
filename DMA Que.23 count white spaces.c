/* Que.23 C program to accept a sentence from user and count number of white spaces from that sentence using DMA 
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int count =0 , j;
	int i=0 ,num_of_char=1;//num of char is 1 cause there is we have already inserted one character \0 in 0th index
	char *str = NULL; //intiallize pointer to null
	//allocating memory dynamically to one character in string i.e \0
	str = (char *)malloc(sizeof(char));
	*(str+0)='\0';//first storing \0 in 0th index 
	printf("please enter the string :");
	do
	{
		scanf("%c",&ch);
		if(ch!='\n')
		{
			num_of_char++;//if condition is true then increment num_of_char
			//reallocating memory dynamically to n number of character in string one by one
			str = (char *)realloc(str,num_of_char * sizeof(char));
			*(str+i) = ch;
			*(str+i+1) ='\0';
			i++;//increment i
		}
	}while(ch!='\n');
	
	for(j=0 ; *(str+j) != '\0' ; j++)
	{
		//Verfy Ascii value
		if(*(str+j) == 32)
		{
			count++;
		}
	}
	printf("Number of capital letters : %d\n",count);
	
	getch();
}