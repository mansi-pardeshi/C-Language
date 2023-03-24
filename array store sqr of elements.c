/* Que.19 C program to store square of elements in same array array 
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,sqr;
	int a[50];
	printf("enter how many elemnts you want to enter :\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Squares of array elements is :\t");
	for(i=0;i<n;i++)
	{
		a[i] = a[i]*a[i];
		printf("%d\t",a[i]);
	}
	getch();
}