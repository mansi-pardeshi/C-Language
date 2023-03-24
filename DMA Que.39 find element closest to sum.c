/*
* C program to find two elements such that their sum is closeest to given number
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int *p = NULL ;
	int i , n ,temp , j , sum=0 ,num , d , diff;
	printf("Enter how many elements you want to insert :\n");
	scanf("%d",&n);
	printf("Enter number :\n");
	scanf("%d",&num);
	p = (int *)malloc(n * sizeof(int));
	printf("Enter elements in array :\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",(p+i));
	}
	d = *(p+0) + *(p+1);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(i != j)
			{
				sum = *(p+i) + *(p+j);
				diff = sum - num ;
				if(d > diff)
				{
					d  = diff;
				}
			}
		}
	}
	printf("smallest diff is %d" ,d );
	//printf("%d and %d",*(p+i),*(p+j));
	/*printf("sorted array is :\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\t",*(p+i));
	}
	sum = *(p+0) + *(p+1);*/
	getch();
}