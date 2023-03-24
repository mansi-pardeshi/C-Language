#include<stdio.h>
#include<conio.h>
void main()
{
int i,max,sec_max,n;
int a[50];
printf("HOW MANY ELEMNTS YOU WANT TO INSERT IN ARRAY\n");
scanf("%d",&n);
printf("ENTER ARRAY ELEMENTS\n");
for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
max=a[0];
for(i=1;i<n;i++)
{
	sec_max=max;
if(max<a[i])
{
max=a[i];
}
else if(sec_max<max && sec_max>a[i])
	sec_max=a[i];
	printf("SECOND LARGEST NUMBER OF ARRAY IS %d\n",sec_max);
	getch();
}
}