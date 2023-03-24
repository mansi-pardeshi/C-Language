/* Que.4 C program that return the position of pallindrome
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i ,n,mod,rev=0 ,count=0,num;
	int *p = NULL;
	printf("How many numbers you want to enter\n");
	scanf("%d",&n);
	p = (int *)malloc(n * sizeof(int));
	printf("Enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		num = 0;
		if(*(p+i) != 0)
		{
			num = *(p+i);
			while(num > 10)
			{
			mod = num % 2;
			rev = rev + mod;
			num = num / 10;
			}
			if(rev == num)
			{
				printf("index of pallinfrome %d ",i+1);
			}
		}
	}
	getch();
}