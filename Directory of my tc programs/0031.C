/* (31) Perimeters of various shapes.
(strcpy, strcmp, array functions) <Comp1/MATH0> */

#include<stdio.h>
#include<string.h>
main()
{


char ca[100],a1[100],a2[100],a3[100],a4[100];
int ts1, ts2, ts3,tper;
int ss1,sper;
int rs1, rs2, rper;
int rps1, rpper;
int x,h;

clrscr();
printf("\t\tPERIMETER OF THE FOLLOWING PLANE FIGURES\n");
printf("1. Triangle\n");
printf("2. Square\n");
printf("3. Rectangle\n");
printf("4. Regular Pentagon\n");
printf("Type the shape you want to determine the perimeter: ");

for (;;)
{
gets(ca);
h=strlen(ca);

strcpy(a1,"Triangle");
strcpy(a2,"Square");
strcpy(a3,"Rectangle");
strcpy(a4,"Regular Pentagon");


if (strcmp(a1,ca)==0)
	{
	printf("Enter the 3 sides of the triangle:\n");
	printf("Side 1: ");
	scanf("%d",&ts1);
	printf("Side 2: ");
	scanf("%d",&ts2);
	printf("Side 3: ");
	scanf("%d",&ts3);
	tper=ts1+ts2+ts3;
	printf("The perimeter of your triangle is %d",tper);
	}

else if (strcmp(a2,ca)==0)
	{
	printf("Enter the side of the square:\n");
	printf("Side: ");
	scanf("%d",&ss1);
	sper=ss1*4;
	printf("The perimeter of your triangle is %d",sper);
	}

else if (strcmp(a3,ca)==0)
	{
	printf("Enter the 2 sides of the rectangle:\n");
	printf("Side 1: ");
	scanf("%d",&rs1);
	printf("Side 2: ");
	scanf("%d",&rs1);
	rper=(rs1*2)+(rs2*2);
	printf("The perimeter of your rectangle is %d",rper);
	}

else if (strcmp(a4,ca)==0)
	{
	printf("Enter the side of the regular pentagon:\n");
	printf("Side: ");
	scanf("%d",&rps1);
	rpper=rps1*4;
	printf("The perimeter of your regular pentagon is %d",rpper);
	}


else
	{
	printf("No choices. \n");
	}

printf ("\nEnter [1] to exit or type another plane figures: ");
scanf("%d",&x);

if (x==1)
 {
 printf("Good bye. ");
 break;
 }


}
getch();
}