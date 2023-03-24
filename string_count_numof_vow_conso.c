/* C program to count the number of vowels and number of consonants in the given string
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int j,c1=0,c2=0;
char str[50];
printf("Enter a string :\n");
fgets(str,sizeof(str),stdin);
for(j=0;str[j]!='\n';j++)
{
if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' || 
   str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U')
{
c1++;
}
else if(str[j]!='a' || str[j]!='e' || str[j]!='i' || str[j]!='o' || str[j]!='u' || 
		str[j]!='A' || str[j]!='E' || str[j]!='I' || str[j]!='O' || str[j]!='U')
{
c2++;
}
}
printf("Number of vowels in a string : %d Number of consonants in a string : %d",c1,c2);
getch();
}