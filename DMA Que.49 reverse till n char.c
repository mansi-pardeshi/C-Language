/* Que.49 C program to reverse till first n characters
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char ch;
	int i=0 ,num_of_char=1 , n;
	int count=0 , cnt , j;
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

	 printf("Enter first n character to reverse : \n");
	 scanf("%d",&n);

	//reverse string till n
	 for(i = n ; i >= 0 ; i--)
	 {
		 printf("%c",*(str+i));
	 }

	 //print remaining string after reverse string
	 for(i = n+1 ; *(str+i) != '\0' ; i++)
	 {
		 printf("%c",*(str+i));
	 }
	 getch();
}