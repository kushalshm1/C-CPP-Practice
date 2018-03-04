#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int main ()
{
	int arr[100000];
	int i=0,j=0;
	int temp;

	srand(time(NULL));

	printf("The unsorted numbers are:\n\n\n");
	for(i=0; i<100000; i++)
	{
		arr[i] = rand ();
		printf("%i\t",arr[i]);
	}

	i=0;

	printf("\n\nThe sorted numbers are:\n\n\n");

	while(j < 99999)
	{
		while(i < 100000)
		{
			if(arr[j] > arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}

			i ++;
		}

		j++;

		i = j + 1;
	}

	for(i=0; i<100000; i++)
		printf("%i\t",arr[i]);

	getch ();
}