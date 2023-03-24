/* C program to print unique elements in array 
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j;//intialization
int a[50];
printf("Enter how many elements you want to insert in aray\n");
scanf("%d",&n);
printf("Enter elements in array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Unique elements in array are : ");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(a[i] == a[j] && i != j)
			{
				break;
			}
		}
		if(j == n )
		{
			printf("%d\t",a[i]);
		}
	}
getch();
}