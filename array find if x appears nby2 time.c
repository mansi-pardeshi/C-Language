/* Que.21 C program to find the given number x apears n/2 times in sorted array of n integers 
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,x,count=0;
	int a[50];
	printf("enter how many elemnts you want to enter");
	scanf("%d",&n);
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i] == x)
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