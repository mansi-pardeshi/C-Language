/* Que.15 C program to check array bounds while inputting elements
* Owner : Mansi Pardeshi.
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;//intialization
int a[5];
printf("Enter elments in array\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<15;i++)
{
	printf("%d",a[i]);
}
getch();
}
