/*
 * Gillian Sanchez
 * 1003184
 * sanchezg@uoguelph.ca
 * Assignment 2 Question 4
 * Counts the number of ones in a binary string.
 * 
 * Assumes string entered is a binary string, but works even if input
 * is not a number. 
 */

#include <stdio.h>
#include <string.h>

int main() {
	//instantiate variables
	int iGoodness = 0;
	int i = 0;
	char sString[50];

	//ask user for a string
	printf("Enter a string with no spaces: ");
	scanf("%s", sString);

	for (i = 0; i < strlen(sString); ++i) {
		if (sString[i] == '0' || sString[i] == '1') {
			if (sString[i] == '1') {
				++iGoodness;
			}
		}
		else {
			iGoodness = 0;
			break;
		}
	}

	printf("\nGoodness of the input string is %d\n", iGoodness);
	return 0;
}
