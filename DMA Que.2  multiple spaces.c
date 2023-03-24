/* Que.2 C program to accept multiple spacesw in string and print it as it is.
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int i=0 ,num_of_char=1;
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
	//print string 
	printf("your string is :\n");
	for(i=0;*(str+i) !='\0';i++)
	{
		printf("%c",*(str+i));
	}

	getch();
}