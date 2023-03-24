/* Que.13 C progrrm to separate odd and even integers in same array using dynamic memory allocation
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i, n,temp,l,r;
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
	for(l=0;l<n;l++)//from left of array
	{
		for(r=n-1;r>l;r--)//from right of array
		{
			if(*(p+l) % 2 != 0 && *(p+r) %2 == 0)//swap
			{
				temp=*(p+l);
				*(p+l)=*(p+r);
				*(p+r)=temp;
			}
		}
	}
	for(i=0;i<n;i++)//printing numbers
	{
		printf("%d\t",*(p+i));
	}
	getch();
}
