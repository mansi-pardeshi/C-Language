/* Que.16 C program to print alternate elements in array 
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i;
	int a[50];
	printf("enter how many elemnts you want to enter");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i % 2 == 0)
		{
		printf("%d\t",a[i]);
		}
	}
	getch();
}