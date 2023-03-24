/*
* Que.3 C program to find transpose of given matrix using dynamic memory allocation
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i , j , row , col ;
	int **p = NULL;
	
	printf("How many rows you want :\n");
	scanf("%d",&row);

	printf("How many columns you want :\n");
	scanf("%d",&col);

	p = (int**)malloc(row * sizeof(int));

	for(i=0 ; i<row ; i++)
	{
		*(p+i) = (int*)malloc(row * sizeof(int));
	}

	printf("Enter array elements :\n");
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}

	printf("Given matrix is :\n");
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}

	printf("Transpose of given matrix is :\n");
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("%d\t",*(*(p+j)+i));
		}
		printf("\n");
	}

	getch();
}