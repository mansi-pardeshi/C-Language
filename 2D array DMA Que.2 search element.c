/*
* C program to search element in 2D array using dyanamic memory allocation
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i , j , rows , col , flag=0 ;
	int search;
	int **p = NULL;

	printf("Enter how many rows you want :\n");
	scanf("%d",&rows);

	printf("Enter how many columns you want :\n");
	scanf("%d",&col);

	p = (int**)malloc(rows * sizeof(int));

	for(i=0 ; i<rows ; i++)
	{
		*(p+i) = (int*)malloc(rows*sizeof(int));
	}

	printf("Enter array elements :\n");//scan matrix elements
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}

	printf("Given matrix is :\n");//print matrix
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}

	printf("Enter number you want to search in matrix :\n");
	scanf("%d",&search);

	for(i=0 ; i<rows ; i++)//searching element
	{
		for(j=0 ; j<col ; j++)
		{
			if(*(*(p+i)+j) == search)
			{
				flag = 1;
			}
			break;
		}
	}

	if(flag == 1)
	{
		printf("Given number is found \n");
	}
	else
	{
		printf("Given number is not found\n");
	}

	getch();
}