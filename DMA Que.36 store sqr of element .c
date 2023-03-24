/* Que.36 C program to store square of elements in same array array using dynamic memeory allocation
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,sqr;
	int *p=NULL;
	printf("enter how many elemnts you want to enter :\n");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Squares of array elements is :\t");
	for(i=0;i<n;i++)
	{
		*(p+i)= *(p+i) * *(p+i);
		printf("%d\t",*(p+i));
	}
	getch();
}