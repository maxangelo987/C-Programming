#include<stdio.h>
#include<string.h>
main()
{
char str[100],revstr[100],*myword[10],*ptr;
long num,j,count,a,counta,i;
clrscr();

gets(str);

a=0;
counta=0;
ptr=strtok(str," ");
while (ptr!=NULL)
	{
	myword[a]=ptr;
	a++; counta++;
	ptr=strtok(NULL," ");
	}

for (i=0;i<counta;i++)
{

strcpy(revstr,myword[i]);
strrev(revstr);

if (strcmp(myword[i],revstr)==0)
	{
	sscanf(myword[i],"%lX",&num);
	printf("%lX is Palindrome and it's conversion is %ld",num,num);
	count=0;
	for (j=2;j<num;j++)
		{
		if (num%j==0)
			{
			count++;
			}
		}
	if (count==0)
		{
		printf(" and %ld is prime.",num);
		}
	}

else
	{
	printf("%lX is not a Palindrome.");
	}
	printf("\n");
}
getch();
}