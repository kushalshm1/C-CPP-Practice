#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	srand(time(NULL));
	float x,y;
	int counter = 0;

	while(counter < 100000)
	{
		printf("Going to randomly generate two numbers between 0 and 1.....\n\n");

		x = ((float)rand())/((float)RAND_MAX);
		y = ((float)rand())/((float)RAND_MAX);

		printf("And the numbers are %f and %f\n\n",x,y);

		if (x > 0.8 && y > 0.8)
		{
			printf("The addition of %f and %f is %f\n\n",x,y,(x+y));
			printf("The subtraction of %f and %f is %f\n\n",x,y,(x-y));
			printf("The multiplication of %f and %f is %f\n\n",x,y,(x*y));
			printf("The division of %f and %f is %f\n\n",x,y,(x/y));
		}

		printf("Already done with %i number of iterations and the value of counter is %i\n\n\n\n",(counter+1), counter);

		counter = counter + 1;
	}

	getch ();
}