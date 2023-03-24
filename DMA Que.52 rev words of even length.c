/* Que.52 C program that accept string from user and reverse words from that string which are of even length
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int j , count ,k ;
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
	
	i=0;
	while(*(str+i) !='\n')
	{
		while(*(str+i) ==' ')
		{
			i++;
		}
		j=i;
		count=0;
		//length of word
		while(*(str+i) !=' ' && *(str+i) !='\n')
		{
			count++;
			i++;
		}
		k=i-1;
		//if count of word is even print reverse the word
		if(count!= 0)
		{
			if(count%2==0)
			{
				while(k>=j && *(str+k)!='\n')
				{
					printf("%c",*(str+k));
					k--;
				}
				printf(" ");
			}
			
			//if count of word is odd print the word as it is
			else if(count%2!= 0)
			{
				while(j<=k && *(str+j)!='\n')
				{
					printf("%c",*(str+j));
					j++;
				}
				printf(" ");
			}
		}
	}
	*(str+j) = '\0';
	getch();
}