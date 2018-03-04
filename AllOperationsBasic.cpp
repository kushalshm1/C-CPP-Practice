#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int x = rand(); //Variable declaration and initialization 
	int y = rand();
	int z = (x + y);
	printf("The Addition of %i and %i is %i\n\n",x,y,z);

	x = rand(); 
	y = rand();
	z = (x - y);
	printf("The Subtraction of %i and %i is %i\n\n",x,y,z);

	x = rand(); 
	y = rand();
	z = (x * y);
	printf("The Multiplication of %i and %i is %i\n\n",x,y,z);

	x = rand(); 
	y = rand();
	z = (x / y);
	printf("The Division of %i and %i is %i\n",x,y,z);

	getch();
}

