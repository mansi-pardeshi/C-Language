/* Que.11 C progrrm to sort only even  elements in ascending order using dynamic memory allocation
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i, n,temp,j;
	int *p= NULL;
	printf("how many elemnts you want to enter");
	scanf("%d",&n);
	printf("enter elemnts\n");
	//allocating memory for n intigers
	p = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)//ascending sort logic
	{
		for(j=i+1;j<n;j++)
		{
		if(*(p+i)>*(p+j) && *(p+i) % 2 == 0 && *(p+j) % 2 == 0)
		{
			temp = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = temp;
		}
		}
	}
	printf("Sorted even elements in array is : \n");
	for(i=0;i<n;i++)//printing numbers
	{
		printf("%d\t",*(p+i));
	}
	getch();
}
