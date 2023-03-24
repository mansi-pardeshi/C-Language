/* Que.24 C program to find the maximum sum of subsequent elemnts in array
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,j,sum=0;
	int max_sum=0;
	int a[50];
	printf("enter how many elemnts you want to enter");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max_sum = a[0] + a[1];
	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			sum = a[i] + a[j];
			if(max_sum < sum)
			{
				max_sum = sum;
			}
			sum = 0;
		}
	}
	printf("maximum sum of subsequent elemnts in array %d",max_sum);
	getch();
}