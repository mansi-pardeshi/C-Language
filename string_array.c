/* C program to accept string with multiple spaces from user and print as it is.
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
char name[14];
printf("enter a name\n");
/*scanf only takes charters before space after space it will break*/
//scanf("%s",name);
/*gets will display ouput but it takes the memmory of others */
//gets(name);
/*coreect way to inlude in our program*/
fgets(name,sizeof(name),stdin);
printf("%s",name);
getch();
}