/*
* Que.10 C program to check whther the given matrix is symetric  or not using dynamic memory allocation
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i , j , t , b , d ,cnt=0;// t = total elements , b = below/above diagonal elements , d = diagonal elements i.e euqal to numof rows/col 
	int rows , col;
	int **p = NULL;
	printf("enter how many rows you want :\n");
	scanf("%d",&rows);
	printf("enter how many columns you want :\n");
	scanf("%d",&col);

	t = rows * col ;
	d = rows ;
	b = (t-d)/2;

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

	for(i=0 ; i<rows ; i++)//check whether matrix is symmetric matrix or not
	{
		for(j=0 ; j<col ; j++)
		{
			if(*(*(p+i)+j) == *(*(p+j)+i) )
			{
				cnt++;
			}
		}
		printf("\n");
	}

	if(cnt == t)
	{
		printf("Given matrix is symmetric matrix");
	}
	else
	{
		printf("Given matrix is not symmetric matrix");
	}

	getch();

}