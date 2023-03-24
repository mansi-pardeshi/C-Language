/*
* Que.5 C program to substract two matrices in third matrices using dynamic memory allocation
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i , j , n;
	int rows , col;
	int **p = NULL;
	int **q = NULL;
	printf("enter how many rows you want :\n");
	scanf("%d",&rows);
	printf("enter how many columns you want :\n");
	scanf("%d",&col);

	p = (int**)malloc(rows * sizeof(int*));
	q = (int**)malloc(rows * sizeof(int*));

	for(i=0 ; i<rows ; i++)
	{
		*(p+i) = (int*)malloc(rows * sizeof(int));
	}
	for(i=0 ; i<rows ; i++)
	{
		*(q+i) = (int*)malloc(rows * sizeof(int));
	}

	printf("Enter elements of first matrix :\n");
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}
	printf("Enter elements of second matrix :\n");
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			scanf("%d",*(q+i)+j);
		}
	}

	printf("Your first matrix is :\n");
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
	printf("Your second matrix is :\n");
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("%d\t",*(*(q+i)+j));
		}
		printf("\n");
	}

	printf("Substraction of above two matrices is :\n");//perform substraction
	for(i=0 ; i<rows ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("%d\t",*(*(p+i)+j) - *(*(q+i)+j));
		}
		printf("\n");
	}

	getch();

}