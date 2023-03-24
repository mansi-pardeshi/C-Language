/* Que.5 C program to reverse given 1D array without sorting algorithm (using DMA)
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,rev;
	int *p=NULL;
	printf("please enter how many elements you want\n");
	scanf("%d",&n);
	p=(int*)malloc(n * sizeof(int));
	printf("enter elemnts\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
    }
	
	for(i=n-1;i>=0;i--)//reverse
	{
		printf("%d\t",*(p+i));
    }
	getch();
}