/* Q.25 C program which accepts two strings from user and compare two strings. 
   If both strings are equal then return zero otherwise return diference between first mismatch character.
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,l1=0,count=0,d,l2=0;
	char str1[50],str2[50];
	printf("Enter first string :");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter second string :");
	fgets(str2,sizeof(str2),stdin);
	//length of string l1 and l2
	for(i = 0 ; str1[i] != '\n' ; i++)
	{
		l1++;
	}
	for(i = 0 ; str2[i] != '\n' ; i++)
	{
		l2++;
	}
	if(l1==l2)
	{
	for(i=0;i<l1;i++)
	{
		//count if both values are equal
		if(str1[i]==str2[i])
		{
			count++;
		}
		else
			break;
	}
	}
	if(count != l1)
	{
		d = str1[i]-str2[i];
		printf("Both strings are Mismatched and difference between their first mismatched character is : %d",d);
	}
	else if(count==l1)
	{
		printf("Both stringa are  Equal");
	}
	
	getch();
}