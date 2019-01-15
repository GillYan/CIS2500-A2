/*
 * Gillian Sanchez
 * 1003184
 * sanchezg@uoguelph.ca
 * Assignment 2 Question 2
 * Ask user for population of 10 provinces and prints info based on input.
 */

#include <stdio.h>

int main() {
	//instantiate variables
	double dPopulation[10];
	double dAverage;
	int iHighest = 0;
	int iLowest = 0;
	int i = 0;

	//ask user to enter population of 10 provinces
	printf("Enter the population of 10 provinces of Canada (in million):\n\n");

	for (i = 0; i < 10; ++i) {
		//get the population of each of the 10 provinces
		printf("Province number %d: ", i + 1);
		scanf("%lf", &dPopulation[i]);

		//find which province has the highest population
		if (dPopulation[i] > dPopulation[iHighest]) {
			iHighest = i;
		}

		//find which province has the lowest population
		if (dPopulation[i] < dPopulation[iLowest]) {
			iLowest = i;
		}

		//add the population of each province to get the average later
		dAverage += dPopulation[i];
	}

	//calculate the average population
	dAverage /= 10;

	//print the statistics of the provinces
	printf("\n**************************************************\n");

	//print the average population
	printf("Average Population in Canada = %.2lf million\n", dAverage);

	//print the highest population
	printf("Province number %d has the highest population\n", iHighest + 1);
	printf("Highest population = %.2lf million\n", dPopulation[iHighest]);

	//print the lowest population
	printf("Province number %d has the lowest population\n", iLowest + 1);
	printf("Lowest population = %.2lf million\n", dPopulation[iLowest]);

	printf("**************************************************\n");

	return 0;
}
