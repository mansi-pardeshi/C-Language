/* Que.28 C program to check array bound while inputting elements into the array using dynamic memeory allocation
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i;
	int a[5];
	int *p= a;
	p = (int*)malloc(5*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<20;i++)
	{
		printf("%d\n",*(p+i));
	}
	getch();
}