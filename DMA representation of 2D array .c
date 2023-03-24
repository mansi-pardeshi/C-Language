/*
* C program to represent 2D array using dynamic memory location
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i ,j;
	int** p = NULL;
	p = (int**)malloc(3 * sizeof(int*));

	for(i=0 ; i<3 ; i++)
	{
		*(p+i) = (int*)malloc(3*sizeof(int));
	}

	printf("enter array elements\n");
	for(i=0 ; i<3 ;i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}

	printf("Array elements are :\n");
	for(i=0 ; i<3 ;i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
	getch();
}