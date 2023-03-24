/* Q26. C program which accepts two strings from user and compare only first n characters of two strings. 
   If both strings are equal till first n characters then return zero otherwise return diference between first mismatch character.
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,count=0,n;
	char str1[50],str2[50];
	printf("Enter first string :");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter second string :");
	fgets(str2,sizeof(str2),stdin);
	printf("Please enter the value of N to compare :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(str1[i]==str2[i])
		{
			count++;
		}
		else
			break;
	}
	if(count==n)
	{
		printf("Both strings are equal");
	}
	else if(count!=n)
	{
		printf("Both strings are mismatched");
	}
	getch();
}