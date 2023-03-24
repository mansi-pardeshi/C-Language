/* Que.6 C program to count the number if characters in string using
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int i=0 ,j , count=0 ,  num_of_char=1;//num of char is 1 cause there is we have already inserted one character \0 in 0th index
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

	/*j=0;
	while(*(str+j)!='\0')//increment till null character
	{
		count++;
		j++;
		if(*(str+j)==' ')
		{
			count--;
		}
	}
	count--;*/
	printf("Length of string is : %d",num_of_char-1);

	getch();
}