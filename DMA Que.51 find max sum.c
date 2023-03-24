/* Que.51 C program to find the maximum sum of subsequent elemnts in array using dynamic memeory allocation
* Owmer : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,j,sec_max,max,sum=0,max1;
	int max_sum=0;
	int *p=NULL;
	printf("enter how many elemnts you want to enter");
	scanf("%d",&n);
	p = (int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	max_sum = *(p+0) + *(p+1);
	for(i=0 ; i<n ; i++)
	{
			sum = *(p+i) + *(p+i+1);
			if(max_sum < sum)
			{
				max_sum = sum;
			}
			sum = 0;
	}
	printf("maximum sum of subsequent elemnts in array %d",max_sum);
	/*//finding maximum element
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(*(p+i) < *(p+j))
			{
				break;
			}
		}
		if(j == n)
		{
			max = *(p+i);
		}
	}
	//printf("max %d\n",max);
	//finding second maximun
	max1=max;
	max1=*(p+0);
	for(i=0;i<n;i++)
	{
		sec_max=max1;
		if(max1<*(p+i))
		{
			max1=*(p+i);
		}
		 if(sec_max<max1 && sec_max>*(p+i))
		{
			sec_max=*(p+i);
		}
	}
	//printf("second max %d\n",sec_max);
	sum = max + sec_max;
	printf("maximum sum of subsequent elemnts in array is : %d",sum);*/
	getch();
}