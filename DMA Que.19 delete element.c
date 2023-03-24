/* Que.19 C program to delete element in array using dynamic memeory allocation
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,pos;
	int *p=NULL;
	printf("enter how many elemnts you want to enter");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Array before deletion\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	//deletion
	printf("\nEnter the position of number you want to delete\n");
	scanf("%d",&pos);
	for(i=pos-1 ; i<n; i++)//shifting elements towards left side 
	{
		*(p+i) = *(p+i+1);
	}
	n--;//decrement array size by one
	printf("Array after deletion :\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t",*(p+i));
	}
	getch();
}