/* Que.53 C program to check string is pallindrome or not
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
	int j , k ,count=0 , cnt=0 ;
	char *temp = NULL;
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

	temp = (char *)malloc(num_of_char * sizeof(char));

	//length of string
	for(j=0 ; *(str+j) != '\0' ; j++)
	{
		count++;
	}
	//count--;
	//printf("count is %d",count);
	i=0;
	//reverse string
	for(j=count ; j>=0 ; j--)
	{
		*(temp+i) = *(str+j);
		i++;
	}
	*(temp+i)='\0';

	printf("temp is\n");
	for(j=0 ; *(temp+j) != '\0' ; j--)
	{
		printf("%c",*(temp+j));
	}

	for(i=0 ; i<=count ; i++)
	{
		if(*(temp+i+1) == *(str+i))
		{
			cnt++;
		}
		else
			break;
	}
	if(count != cnt)
	{
		printf("Given string is not pallindrome\n");
	}
	else if(count == cnt)
	{
		printf("Given string is pallindrome\n");
	}
	getch();
}