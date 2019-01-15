/*
 * Gillian Sanchez
 * 1003184
 * sanchezg@uoguelph.ca
 * Assignment 2 Question 5
 * Print Multiplication Tables
 */

#include <stdio.h>

int main() {
	//instantiate variables
	char cContinue = '?';
	char sTableName[9][50] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	int iChoice = 0;
	int iTable[9][9];
	int i = 0;
	int j = 0;

	//calculate the multiplication table for numbers 1 to 9
	//goes through the the multiplication table of each number
	for (i = 1; i <= 9; ++i) {
		//multiplies the number by the numbers 1 to 9 to fill the table
		for (j = 1; j <= 9; ++j) {
			iTable[i - 1][j - 1] = i * j;
		}
	}

	do {
		//ask user to enter a choice
		printf("\nEnter zero (0) to see all multiplication tables from 1 - 9 OR\n");
		printf("Enter a specific number between 1 and 9 to see its multiplication table\n");
		printf("\nEnter a choice: ");
		scanf("%d", &iChoice);

		//print a table if the number entered is between 0 and 9
		if (iChoice >= 0 && iChoice <= 9) {
			//print the whole multiplication table if zero is entered
			if (iChoice == 0) {
				//print the header of the multiplication table
				printf("\t\t\tPrinting Multiplication Tables 1 - 9");
				printf("\n********************************************************************************\n");

				//print the column names
				for (i = 0; i < 9; ++i) {
					printf("\t%s", sTableName[i]);
				}

				//print the rows
				for (i = 0; i < 9; ++i) {
					//print the row name
					printf("\n%s", sTableName[i]);

					//print the data for the row
					for (j = 0; j < 9; ++j) {
						printf("\t%d", iTable[i][j]);
					}
				}
			}
			//print the multiplication table of the inputted number that was not zero
			else {
				//print the header
				printf("\nPrinting multiplication table for %d:", iChoice);
				printf("\n-----------------------------------\n");

				//print the data of the table
				for (i = 0; i < 9; ++i) {
					printf("%d X %d = %d\n", iChoice, i + 1, iTable[iChoice - 1][i]);
				}
			}
		}

		//print invalid number message if the number entered is not between 0 to 9
		else {
			printf("\nThat is an invalid number.");
		}

		//ask user if they want to continue
		printf("\n\nDo you wish to continue? Enter y for yes, any other character for no: ");
		scanf(" %c", &cContinue);

	//continue the loop until user enters a character other than y
	} while (cContinue == 'Y' || cContinue == 'y');

	//print goodbye statement
	printf("\nGoodbye.\n");

	return 0;
}
