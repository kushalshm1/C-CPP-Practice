#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	srand(time(NULL));
	int number;
	int divisor = 2;
	int counter = 0;
	int remainder;
	int reverse = 0;
	int numbercopy;

	while(counter < 1000)
	{
		number = rand ();

		while(divisor < number)
		{
			if (number % divisor == 0)
				break;

			divisor ++;
		}

		if (divisor == number)
		{
			numbercopy = number;			//????????

			while(number > 0)
			{
				remainder = number % 10;
				reverse = reverse * 10 + remainder;
				number = number/10;
			}
			printf("The reverse of %i is %i\n\n", numbercopy, reverse);

			reverse = 0;		//??????
		}

		counter ++;
						//???????????
		divisor = 2;
	}

	getch ();
}