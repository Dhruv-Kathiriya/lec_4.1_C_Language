#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	int b=5;
	clrscr();

	a=a+b;
	b=a-b;
	a=a-b;


	printf("A = %d\n",a);
	printf("B = %d\n",b);

	getch();

}