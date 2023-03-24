/* Que.22 C program to find maximum / minimum in array using dynamic memeory allocation
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,j;
	int *p=NULL;
	printf("Enter how many elemnts you want to enter :\n");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	printf("Enter elements :\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",p+i);
	}
	printf("Maximum element in array is :");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(*(p+i) < *(p+j))
			{
				break;
			}
		}
		if(j == n)
		{
		printf("%d\n", *(p+i));
		}
	}
	printf("Minimum element in array is :");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(*(p+i) > *(p+j))
			{
				break;
			}
		}
		if(j == n)
		{
		printf("%d\n", *(p+i));
		}
	}
	getch();
}