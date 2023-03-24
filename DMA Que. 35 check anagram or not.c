/* Que.35 C program to accept string from user and check it is anagram or not
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char ch , ch2;
	int l1 , l2 , cnt1=0 , cnt2=0 , count , temp;
	int i=0 ,num_of_char=1 , j;
	int len , len2 , length=0;
	char *str2 = NULL;
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

	str2 = (char *)malloc(sizeof(char));
	*(str2+0)='\0';
	num_of_char = 1;
	i=0;
	printf("please enter the string :");
	do
	{
		scanf("%c",&ch);
		if(ch!='\n')
		{
			num_of_char++;
			str2 = (char*)realloc(str2,num_of_char * sizeof(char));
			*(str2+i) = ch;
			*(str2+i+1) ='\0';
			i++;
		}
	}while(ch!='\n');
	
	
	i=0;
	while (*(str+i) != '\0')
	{
		if((*(str+i) >= 'a' && *(str+i) <='z') || (*(str+i) >= 'A' && *(str+i) <='Z'))
		{
			cnt1++;
		}
		i++;
	}
	l1=cnt1;
	i=0;
	while (*(str2+i) != '\0')
	{
		if((*(str2+i) >= 'a' && *(str2+i) <= 'z') || (*(str2+i) >= 'A' && *(str2+i) <= 'Z'))
		{
			cnt2++;
		}
		i++;
	}
	l2=cnt2;
	i = 0 ;
	while( *(str+i) != '\0' )
	{
		j = i+1;
		while( *(str+j) != '\0' )
		{
			if( *(str+i) > *(str+j) )
			{
				temp = *(str+i);
				*(str+i) = *(str+j);
				*(str+j) = temp;
			}
			j++;
		}  
		i++;
	}
	i = 0;
	while( *(str2+i) != '\0' )
	{
		j = i+1;
		while( *(str2+j) != '\0' )
		{
			if( *(str2+i) > *(str2+j) )
			{
				temp = *(str2+i);
				*(str2+i) = *(str2+j);
				*(str2+j) = temp;
			}  
			j++;
		}  
		i++;
	}  
	i = 0;
	count = 0;
	while( *(str+i) != '\0' )
	{
		if( *(str+i) == *(str2+i) )
		{
			count++;
		}
		i++;
	}  
	if( l1 == count && l2 == count )
	{
		printf("Given strings are Anagram");
	}
	else
	{
		printf("Given strings are not Anagram");
	}
	getch();
}