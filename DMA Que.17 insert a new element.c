/* Que.17 C program to insert a new value in the array using DMA
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int i,n,insert,temp,j,pos;
int *p = NULL;
printf("Enter how many number of elements you want to insert in array\n");
scanf("%d",&n);
p = (int *)malloc(n * sizeof(int));
printf("Enter array elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",p+i);
}
//sorting array
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(*(p+i) > *(p+j))
		{
			temp = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = temp;
		}
	}
}
printf("Sorted array is :\n");
for(i=0 ; i<n ; i++)
{
	printf("%d\t",*(p+i));
}
//insertion
printf("\nEnter bthe number you want to insert\n");
scanf("%d",&insert);
for(i=0 ; i<n ; i++)
{
	if(insert < *(p+i))
	{
		pos = i;//position to insert number
		break;
	}
	else if(insert > *(p+i))
	{
		pos = n;//position to insert number
		break;
	}
}
for(j=n ; j>=pos ; j--)//shifting elements
{
	*(p+j+1) = *(p+j);
}
n++;//increment array size by one
*(p+pos) = insert;
printf("Array after insertion :\n");
for(i=0 ; i<n ; i++)
{
	printf("%d\t",*(p+i));
}
getch();
}