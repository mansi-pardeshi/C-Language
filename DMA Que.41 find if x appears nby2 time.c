/* Que.41 C program to find the given number x apears n/2 times in array of n integers using dynamic memeory allocation
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,x,count=0;
	int *p=NULL;
	printf("enter how many elemnts you want to enter");
	scanf("%d",&n);
	printf("Enter value of x:");
	scanf("%d",&x);
	p = (int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i) == x)
		{
			count++;
		}
	}
	if(count >= n/2)
	{
		printf("Gien number %d appears more than n/2  times ",x);
	}
	else
	{
		printf("Given number %d does not appears more than n/2 times ",x);
	}
	getch();
}