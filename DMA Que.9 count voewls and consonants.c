/* Que.9 C program to count the number of vowels and number of consonants in a string using DMA
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int c1=0 , c2=0 , j;
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
		if(*(str+j)=='a' || *(str+j)=='e' || *(str+j)=='i' || *(str+j)=='o' || *(str+j)=='u' || 
			*(str+j)=='A' || *(str+j)=='E' || *(str+j)=='I' || *(str+j)=='O' || *(str+j)=='U')
		{
			c1++;
		}
		else if(*(str+j)!='a' || *(str+j)!='e' || *(str+j)!='i' || *(str+j)!='o' || *(str+j)!='u' || 
		*(str+j)!='A' || *(str+j)!='E' || *(str+j)!='I' || *(str+j)!='O' || *(str+j)!='U')
		{
			c2++;
		}
	}
	printf("Number of vowels in a string : %d \nNumber of consonants in a string : %d",c1,c2);

	getch();
}