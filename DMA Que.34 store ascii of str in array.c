/* Que.34 C program to accept string from user and storre its ascii value in an array
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int i=0 ,num_of_char=1 , j=0;
	int *a = NULL; 
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

	a = (int *)malloc(num_of_char * sizeof(int));

	for(i=0 ; i<num_of_char ; i++)
	{
		printf("%c = %d\n" , *(str+i) , *(a+i));
	}



	getch();
}