/* (17) Finding the largest decimal number and reverse it.
No: 3; Example: 12 123 3;
Output: 321 (for loop function) <Comp1/MATH1>*/

#include<stdio.h>
main()

{

long large,inp3, occur=0,num_limit,a,n,x,y=0,rem, inp1, inp,largest, b, max_numbir, numbir, count,max;
float inp0,inp2;
clrscr();

printf("Program to find the largest decimal number and reverse it.\n");
printf("Enter Numbers you desire to determine: ");
scanf("%ld",&num_limit);





for (a=1;a<=num_limit;a++)
	{
	scanf("%f",&inp0);

	inp1=(long)inp0;   /* Identifying integer/neglecting decimal */
	inp2=inp0-inp1;

	inp3=(long)inp2;

		if (inp3==0) /*identifying largest number*/
			{

			  if (y<inp1)
			     {
			     max=inp1;
			     y=inp1;
			     occur=1;
			     }

			  else if (max==inp0)
				{
				occur++;
				}

			}

		else if (inp3!=0)
			{
			max=0;

			}



large=max;

}


printf("OUTPUT:");

if (large==0)
	{
	printf("No Possible Solution!");
	}
else {
for (;large!=0;)

	{
	rem=large%10;
	large=large/10;
	printf("%ld",rem);
	}
     }

printf("\nIt occurs %ld time(s).",occur);
getch();


}
