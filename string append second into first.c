/* C program which accepts two strings from user and append second string after first string
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,count=0;
	char str1[50],str2[50];
	printf("Enter first string :");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter second string :");
	fgets(str2,sizeof(str2),stdin);
	for(i=0;str1[i]!='\n';i++)
	{
		count++;
	}
	j=count;
	for(i=0;str2[i]!='\n';i++)
	{
		str1[j]=str2[i];
		j++;
	}
	str1[j]='\0';
	printf("Appended string is %s",str1);
	getch();
}