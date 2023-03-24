/* Q15. C program to accept string and print last word of sentence
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,count,j,r;
char str[50],rev[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
i=0;
r=0;
count=0;
	while(str[i]!='\n')//count length of string
	{
		count++;
		i++;
	}

	for(j=count-1;str[j]!=' ';j--)//reverse till last space i.e space before last word
	{
		rev[r]=str[j];
		r++;
	}
	rev[r]='\0';
	//printf("%s",rev);
	for(i=r-1;i>=0;i--)//reverse the above reverse string
	{
		printf("%c",rev[i]);
	}
getch();
}