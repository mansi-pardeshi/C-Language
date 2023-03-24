/* Que.5 C program to sort first half array in ascending and seconf half array in descending order using DMA
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i ,n , mid , temp , j;
	int *p = NULL;
	printf("how many numbers you want to enter\n");
	scanf("%d",&n);
	p = (int*)malloc(n * sizeof(int));
	printf("enter the elements\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",p+i);
	}
	mid = n/2;
	for(i=0 ; i<mid ; i++)
	{
		for(j=i+1 ; j<mid ; j++)
		{
		if(*(p+i) > *(p+j))
		{
			temp = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = temp;
		}
		}
		printf("%d\t",*(p+i));
	}
	for(i=mid ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
		if(*(p+i) < *(p+j))
		{
			temp = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = temp;
		}
		}
		printf("%d\t",*(p+i));
	}
	getch();
}