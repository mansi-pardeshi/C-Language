/*
* Que.6 C program to check whther the given matrix is upper triangular or not using dynamic memory allocation
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

	for(i=0 ; i<rows ; i++)//check whether matrix is upper trianguler or not
	{
		for(j=0 ; j<col ; j++)
		{
			if(j<i && *(*(p+i)+j) == 0)
			{
				cnt++;
			}
		}
		printf("\n");
	}

	if(cnt == b)
	{
		printf("Given matrux is upper triangular");
	}
	else
	{
		printf("Given matrix is not upper triangular");
	}

	getch();

}