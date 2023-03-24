/* Que.2 C program to accept sentence from user and print the number of words of even length and odd length from that sentence using DMA.
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int j=0 , count;
	int even=0 , odd=0;//counter variabels
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

	while(*(str+j) != '\0')
	{
		while(*(str+j) == ' ')
		{
			j++;
		}
		count=0;
		while(*(str+j) != ' ' && *(str+j) != '\0')
		{
			count++;
			j++;
		}
		if(count!=0)
		{
			if(count%2==0)
			{
				even++;
			}
			else if(count%2!=0)
			{
				odd++;
			}
		}
	}
	printf("Number of words of even length : %d\n Number of words of odd length : %d",even,odd);
	getch();
}