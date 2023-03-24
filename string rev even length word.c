/* Q30. c program which accept string from user and reverse the even lenght words from sentence
* Owner : Mansi Pardeshi
* Batch : PPA9
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,j,k,count=0;;
char str[50];
printf("Enter a string : ");
fgets(str,sizeof(str),stdin);
while(str[i]!='\n')
{
while(str[i]==' ')
{
i++;
}
j=i;
count=0;
//length of word
while(str[i]!=' ' && str[i]!='\n')
{
count++;
i++;
}
k=i-1;
//if count of word is even print reverse the word
 if(count!= 0)
{
if(count%2==0)
{
while(k>=j && str[k]!='\n')
{
printf("%c",str[k]);
k--;
}
printf(" ");
}
//if count of word is odd print the word as it is
else if(count%2!= 0)
{
while(j<=k && str[j]!='\n')
{
printf("%c",str[j]);
j++;
}
printf(" ");
}
}
}
getch();
}