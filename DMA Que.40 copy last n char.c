/* Que.40 C program to accept string from user and accept number and then copy last n characters into some anather string
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
	int count=0;
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
	printf("Enter how many last character you want to copy : \n");
	scanf("%d",&n);

	for(j=0 ; *(str+j) != '\0' ; j++)
	{
		count++;
	}

	for(j=count-n ;  *(str+j) != '\0' ; j++)
	{
		*(copy+j) = *(str+j);
	}
	*(copy+j) = '\0';
	printf("last %d characters of above string is : \n",n);
	for(j=0 ; *(copy+j) != '\0' ; j++)
	{
		printf("%c",*(copy+j));
	}
	getch();
}