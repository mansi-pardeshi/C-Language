/* Que.1 C progrrm to find sum of all elements in array using dynamic memory allocation
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	int *p = NULL;
	printf("How many elemnets you want\n");
	scanf("%d",&n);
	p = (int *)malloc(n * sizeof(int));
	printf("Enter elemnts\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + *(p+i);
	}
	printf("Sum of elements is : %d",sum);
	getch();
}