/* C program to sort first half of array in ascending order and second half of array in descending order 
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,m,temp,k;
int a[50];
printf("Enter how many number of elements you want to insert in array:\n");
scanf("%d",&n);
printf("Enter elements in array:\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
m=n/2;//median of array
for(i=0;i<n;i++)
{
	//ascending sort
for(j=0;j<m;j++)
{
for(k=j+1;k<m;k++)
{
	if(a[j]>a[k])
	{
		//swapping
	temp=a[j];
	a[j]=a[k];
	a[k]=temp;
	}
}
}
//descending sort
for(j=m;j<n;j++)
{
for(k=j+1;k<n;k++)
{
	if(a[j]<a[k])
	{
		//swapping
	temp=a[k];
	a[k]=a[j];
	a[j]=temp;
	}
}
}
}
printf("Sorted array first half ascending order and second half descending order is:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}