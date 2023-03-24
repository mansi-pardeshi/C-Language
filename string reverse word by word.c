/* C program to reverse string as below.
* i/p : india is my country o/p : aidni si ym yrtnyoc
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
i=0;
while(str[i]!='\0')
{
	while(str[i]==' ')
	{
		i++;
	}
	j=i;//stores the index of first letter of word
	while(str[i]!=' ' && str[i]!='\0')
	{
		i++;
	}
	printf(" ");

	k=i-1;//stores the index of last letter of word

	while(k>=j && str[k]!='\0')//reverse
	{
		printf("%c",str[k]);
		k--;
	}
}
getch();
}