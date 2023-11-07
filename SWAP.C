#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10;
	int b=5;
	int c;
	clrscr();

	c=a;
	a=b;
	b=c;

	printf("A = %d\n",a);
	printf("B = %d\n",b);

	getch();

}



