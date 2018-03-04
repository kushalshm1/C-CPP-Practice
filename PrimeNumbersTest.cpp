#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>

int main ()
{
	srand(time(NULL));
	int counter = 0;

	while(counter < 1000)
	{
		int number = rand ();
		int divisor = 2;	//We call it variable declaration as well as in ther background memory of 4 bytes gets allocated

		while(divisor < number)
		{
			if (number % divisor == 0)
			{
				printf("%i is not a prime number\n\n",number);
				break;
			}

			divisor ++;
		}

		if (divisor == number)
			printf("%i is a prime number\n\n",number);

		counter ++;
	}

	getch ();

	return 0;
}