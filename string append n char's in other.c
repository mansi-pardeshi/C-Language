/* C program which accepts two strings from user and append n charters of second string after first string
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,count=0,n;
	char str1[50],str2[50];
	printf("Enter first string :");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter second string :");
	fgets(str2,sizeof(str2),stdin);
	printf("Enter how many characters of second string you want to append :");
	scanf("%d",&n);
	for(i=0;str1[i]!='\n';i++)
	{
		count++;
	}
	j=count;
	n=n-1;
	for(i=0;i<=n;i++)
	{
		str1[j]=str2[i];
		j++;
	}
	str1[j]='\0';
	printf("Appended string is %s",str1);
	getch();
}