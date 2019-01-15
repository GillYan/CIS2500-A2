/*
 * Gillian Sanchez
 * 1003184
 * sanchezg@uoguelph.ca
 * Assignment 2 Question 1
 * Ask user for size of design and create a "<-->" shape
 */

#include <stdio.h>

int main() {
	//instantiate variables
	int iNumLines = 0;
	int iWidth = 0;
	int iNumSpaces = 0;
	int iNumAst = 0;
	int i = 0;
	int j = 0;

	//ask the user for the number of lines
	printf("Number of lines? ");
	scanf("%d", &iNumLines);

	//exit program if the number of lines entered is odd
	if (iNumLines % 2 == 1) {
		printf("Invalid input - number of lines must be even.\n");
	}
	else {
		//ask the user for the width between the left and right sides
		printf("Width between left and right figure? ");
		scanf("%d", &iWidth);

		//prints the top half of the design
		for (i = 1; i <= (iNumLines / 2); ++i) {
			//calculate the number of asterisks and spaces on that line
			iNumAst = i;
			iNumSpaces = (iNumLines / 2) - i;

			//print the  spaces on the left side
			for (j = 1; j <= iNumSpaces; ++j) {
				printf(" ");
			}

			//print the asterisks on the left side
			for (j = 1; j <= iNumAst; ++j) {
				printf("*");
			}

			//print the gap between the left and right sides
			for (j = 1; j <= iWidth; ++j) {
				//print dashes instead of spaces at the middle of the design
				if (iNumSpaces == 0) {
					printf("-");
				}
				else {
					printf(" ");
				}
			}

			//print the asterisks on the right side
			for (j = 1; j <= iNumAst; ++j) {
				printf("*");
			}

			//end with a newline at each row
			printf("\n");
		}

		//print the bottom half of the design
		for (i = (iNumLines / 2); i >= 1; --i) {
			iNumAst = i;
			iNumSpaces = (iNumLines / 2) - i;

			//print the spaces on the left side
			for (j = 1; j <= iNumSpaces; ++j) {
				printf(" ");
			}

			//print the asterisks on the left side
			for (j = 1; j <= iNumAst; ++j) {
				printf("*");
			}

			//print the gap between the left and right sides
			for (j = 1; j <= iWidth; ++j) {
				//print dashes instead of spaces at the middle of the design
				if (iNumSpaces == 0) {
					printf("-");
				}
				else {
					printf(" ");
				}
			}

			//print the asterisks on the right side
			for (j = 1; j <= iNumAst; ++j) {
				printf("*");
			}

			//end with a newline at the end of each row
			printf("\n");
		}
	}
	return 0;
}

