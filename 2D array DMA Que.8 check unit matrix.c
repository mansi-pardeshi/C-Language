/*
* Que.8 C program to check whether the given matrix is unit matrix or not using dynamic memory allocation
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i , j , count = 0 , t;
	int rows , col;
	int **p = NULL;
	printf("enter how many rows you want :\n");
	scanf("%d",&rows);
	printf("enter how many columns you want :\n");
	scanf("%d",&col);

	t = rows*col;//total elements

	p = (int**)malloc(rows * sizeof(int*));

	for(i=0 ; i<rows ; i++)
	{
		*(p+i) = (int*)malloc(rows * sizeof(int));
	}

	printf("Enter matrix elements :\n");
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}

	printf("Your matrix is :\n");
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}

	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			if(*(*(p+i)+j) == 1)
			{
				count++;
			}
		}
	}
	if(count == t)
	{
		printf("GIven matrix is a Unit matrix");
	}
	else if(count != t)
	{
		printf("Given matrix is not a Unit matrix");
	}

	getch();

}