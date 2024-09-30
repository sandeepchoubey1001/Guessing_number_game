#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int random,guess;
	int no_of_guess=0;
	srand(time(NULL));
	printf("Welcome to the World of Guessing Numbers\n");
	random=rand() % 100 + 1;
	do{
		printf("Please enter your Guess between (1-100) : ");
		scanf("%d",&guess);
		no_of_guess++;
		
		if(guess<random)
		{
			printf("Guess a larger number.\n");
		}
		else if(guess>random)
		{
			printf("Guess a smaller number.\n");
		}
		else
		{
			printf("Congrulation !!! you have successfully guessed the number in %d attempts",no_of_guess);
		}
	}
	while(guess!=random);
	
	printf("\n Bye Bye, Thanks For Playing:");
	printf("\n Developed by Sandeep Choubey");
}
