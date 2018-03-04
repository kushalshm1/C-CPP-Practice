#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main ()
{
	int base8_number=0;		//A variable for storing base 8 number
	int base8_digit;
	int toss = 1;
	//A variable for tossing the coin where 1 stands for condition of digit generation being true

	int counter=0;	//A variable for counting that how many base 8 numbers have been generated

	//Going to write the code for generating one base 8 number 
	srand(time(NULL));
	while(counter < 1000)
	{
		while(toss == 1 && base8_number < 4277777777)
		{
			base8_digit = rand() % 8;	//Generating a digit of a base 8 number 
			base8_number = base8_number * 10 + base8_digit;	
			//Creating a base 8 number by joining different digits 

			toss = rand () % 2;
		}

		counter ++;
		toss = 1;
		printf("The generated base 8 number is %i\n",base8_number);
		base8_number = 0;

		printf("\n\n\n");

		if(counter % 100 == 0)
		{
			printf("\n\n");			
			system("PAUSE");
			printf("\n\n");
		}
	}

	getch ();
}
