/* Que.15 C progrrm to print all unique elements in array using dynamic memory allocation
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i,n,j;
	int *p = NULL;
	printf("How many elemnets you want\n");
	scanf("%d",&n);
	p = (int *)malloc(n * sizeof(int));
	printf("Enter elemnts\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Unique elements in array are : ");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(*(p+i) == *(p+j) && i != j)
			{
				break;
			}
		}
		if(j == n )
		{
			printf("%d\t",*(p+i));
		}
	}
	getch();
}