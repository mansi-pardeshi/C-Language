/* Que.4 C program to find second highest element in given 1D array using dynamic memory allocation
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,max,sec_max;
	int *p=NULL;
	printf("please enter how many elements you want\n");
	scanf("%d",&n);
	p=(int*)malloc(n * sizeof(int));
	printf("enter elemnts\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
    }
	
	max=*(p+0);
	for(i=1;i<n;i++)//finding second max
	{
			sec_max=max;
		if(*(p+i)>max)
		{
			max=*(p+i);
		}
		else if(sec_max<max && sec_max>*(p+i))
		{
			sec_max=*(p+i);
		}

    }
     printf("Second Largest number in given 1D array is %d\n",sec_max);//print second  max
	getch();

}