/* Que.20 C program to accepts string from user which contains a characters from b to y 
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int i=0 ,num_of_char=1 , j=0;//num of char is 1 cause there is we have already inserted one character \0 in 0th index
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
		while(*(str+j) != ' ' && *(str+j) != '\0')
		{
			if(*(str+j) == 'a' || *(str+j) == 'z')
			{
				*(str+j) = '\0';
			}
			j++;
		}
	}
	printf("%s",str);


	getch();
}