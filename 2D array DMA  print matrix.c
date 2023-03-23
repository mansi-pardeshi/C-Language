/*
* Que.1 C program to read and print a matrix , rows and coulumns must be input from user
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
	printf("enter how many rows you want :\n");
	scanf("%d",&rows);
	printf("enter how many columns you want :\n");
	scanf("%d",&col);

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
	getch();

}