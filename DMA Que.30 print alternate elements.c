/* Que.30 C program to print alternate elements in array using dynamic memeory allocation
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i;
	int *p=NULL;
	printf("enter how many elemnts you want to enter");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		if(i % 2 == 0)
		{
		printf("%d\t",*(p+i));
		}
	}
	getch();
}