/* (33) Input numbers press zero to terminate,
show the prime numbers and its binary
(for loop, nested-for loop, array functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
int i,num[100],t;
int x,prime[100],count[100],j;
int bin[100], base[100], rem[100];
clrscr();

t=0;
for(i=0;;i++)
{
scanf("%d",&num[i]);
if(num[i]==0)
	{
	break;
	}
t++;
}

for (i=0;i<t;i++)
{
count[i]=0;
	for (j=2;j<num[i];j++)
		{
		if (num[i]%j==0)
			{
			count[i]++;
			}
		}


if (count[i]==0)
	{
	prime[i]=num[i];
	}


else
	{
	prime[i]=0;
	}

}


for (i=0;i<t;i++)
	{
	printf("Prime = %d\n",prime[i]);
	}


for (i=0;i<t;i++)
{
bin[i]=0;
base[i]=1;
	for (;prime[i]!=0;)
		{
		rem[i]=prime[i]%2;
		bin[i]=bin[i]+base[i]*rem[i];
		base[i]=base[i]*10;
		prime[i]=prime[i]/2;
		}
}

for (i=0;i<t;i++)
	{
	printf("Binary= %d \n",bin[i]);
	}

getch();
}