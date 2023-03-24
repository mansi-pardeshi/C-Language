/* Que.26 C progrom to find number of all elements in array using dynamic memory allocation
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i;
	int a[] = {1,2,3,4,5};
	int *p = a;
	i = sizeof (p);
	// sizeof(p) = last index i.e 4 & hence number of elements is i+1
	printf("Number of elements present in array are : %d",i+1);
	getch();
}