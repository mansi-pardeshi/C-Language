/* Que.12 C program to replace space with $
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

	//logic
	for(j=0 ; *(str+j) != '\0' ; j++)
	{
		if(*(str+j) == ' ')
		{
			*(str+j)='$';
		}
	}
	printf("%s",str);

	getch();
}