/* Que.21 C program to accept string from user and count the number of capital letters , small letters ,digits , spaces from that sentence using DMA
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int a=0 , A=0 , s=0 , d=0; //counter variables
	int i=0 , j , num_of_char=1;//num of char is 1 cause there is we have already inserted one character \0 in 0th index
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
		//Verfy Ascii values 
		if(*(str+j) >= 97 && *(str+j) <= 122)
		{
			a++;
		}
		else if(*(str+j) >= 65 && *(str+j) <= 90)
		{
			A++;
		}
		else if(*(str+j) >= 48 && *(str+j) <= 57)
		{
			d++;
		}
		else if(*(str+j) == 32)
		{
			s++;
		}
	}
	printf("Number of capital letters : %d\n Number of small letters : %d\n Number of digits : %d\n Number of spaces : %d\n",A,a,d,s);
getch();
}