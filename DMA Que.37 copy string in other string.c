/* Que.37 C program which accepts string from user and copy that string into some another string
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int i=0 ,num_of_char=1 , j;
	char *copy = NULL;
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

	copy = (char *)malloc(num_of_char * sizeof(char));

	for(j=0;*(str+j)!='\0';j++)
	{
		*(copy+j) = *(str+j);
	}
	*(copy+j)='\0';

	printf("Copied string is : \n");
	for(j=0 ; *(copy+j) != '\0' ; j++)
	{
		printf("%c",*(str+j));
	}
getch();
}