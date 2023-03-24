/* Que.54 C program to count the number of digits in array which are less than ,
*         greater than and equal to zero using dynamic memeory allocation
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n , i , l=0 , g=0 , z=0;
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
		if(*(p+i)<=0 && *(p+i) != 0)
	{
	l++;
	}
	else if(*(p+i)>0)
	{
	g++;
	}
	else if(*(p+i)==0)
	{
	z++;
	}
	}
	printf("There are %d greater than zero numbers in given array.\n",g);
	printf("There are %d less than zero numbers in given array.\n",l);
	printf("There are %d equal zero numbers in given array.\n",z);
	getch();
}