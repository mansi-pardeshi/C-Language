/* Que.17 C program to find two elements in array such that the difference 
*         between them is largest
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,j , min , max , diff;
	int a[50];
	printf("Enter how many elemnts you want to enter :\n");
	scanf("%d",&n);
	printf("Enter elements :\n");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Maximum element in array is :");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(a[i] < a[j])
			{
				break;
			}
		}
		if(j == n)
		{
			max = a[i];
			printf("%d\n", a[i]);
		}
	}
	printf("Minimum element in array is :");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(a[i] > a[j])
			{
				break;
			}
		}
		if(j == n)
		{
			min = a[i];
			printf("%d\n", a[i]);
		}
	}
	diff = max - min;
	printf("And the difference between them is : %d",diff);
	getch();
}