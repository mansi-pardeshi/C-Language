/* Que.45. C program to compare two strings equal or not
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch , ch2;
	int  count=0 , d , n;
	int i=0 ,num_of_char=1 , j=0 ,num_of_char2=1;
	char *str2 = NULL; 
	char *str = NULL; 
	str = (char *)malloc(sizeof(char));
	*(str+0)='\0';
	printf("please first enter the string :");
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
	printf("please second enter the string :");
	do
	{
		scanf("%c",&ch2);
		if(ch2!='\n')
		{
			num_of_char2++;
			str2 = (char *)realloc(str2,num_of_char2 * sizeof(char));
			*(str2+j) = ch2;
			*(str2+j+1) ='\0';
			j++;
		}
	}while(ch2!='\n');
	printf("enter how many character you want to compare :\n");
	scanf("%d",&n);

		for(i=0;i<n;i++)
	{
		//count if both values are equal
		if(*(str+i)==*(str2+i))
		{
			count++;
		}
		else
			break;
	}
	if(count == n)
	{
		printf("Both stringa are  Equal");
		/*d = *(str+i)-*(str2+i);
		printf("Both strings are Mismatched and difference between their first mismatched character is : %d",d);*/
	}
	else if(count != n)
	{
		d = *(str+i)-*(str2+i);
		printf("Both strings are Mismatched and difference between their first mismatched character is : %d",d);
		//printf("Both stringa are  Equal");
	}
	
	getch();
}


