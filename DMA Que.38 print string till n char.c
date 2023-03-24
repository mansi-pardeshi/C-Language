/* Que.38 C program to accept string from user and copey first N characters from input string into anather string
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
	int n ,j;
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
	printf("Enter how many character to copy from fisrt : \n");
	scanf("%d",&n);

	for(j=0 ; j<n ; j++)
	{
		*(copy+j) = *(str+j);
	}
	*(copy+j) = '\0';
	printf("First %d characters of above string is : \n",n);
	for(j=0 ; *(copy+j) != '\0' ; j++)
	{
		printf("%c",*(copy+j));
	}
	getch();
}