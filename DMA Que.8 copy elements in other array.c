/* Que.5 C program to sort first half array in ascending and seconf half array in descending order using DMA
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i ,n , j;
	int *p = NULL;
	int *a = NULL;
	printf("how many numbers you want to enter\n");
	scanf("%d",&n);
	a = (int*)malloc(n * sizeof(int));
	p = (int*)malloc(n * sizeof(int));
	printf("enter the elements\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",p+i);
	}
	for(i=0 ; i<n ; i++)
	{
		*(a+i) = *(p+i);
	}
	printf("Copied Array is : \n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t",*(p+i));
	}
	getch();
}