/*
 * Gillian Sanchez
 * 1003184
 * sanchezg@uoguelph.ca
 * Assignment 2 Question 3
 * Ask user for a sentence and prints info of the string.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	//instantiate variables
	char sSentence[50];
	double dAverageLength = 0.0;
	int iVowels = 0;
	int iConsonants = 0;
	int iNumLetters = 0;
	int iNumWords = 0;
	int i = 0;

	//ask user to enter a sentence
	printf("Enter a sentence: ");
	fgets(sSentence, 50, stdin);

	//goes through every character in the sentence
	for (i = 0; i < strlen(sSentence); ++i) {
		//checks if the character is a letter
		if (isalpha(sSentence[i])) {
			//count the number of letters
			++iNumLetters;

			//checks if the character is a vowel or consonant and increases the corresponding counter
			if (sSentence[i] == 'A' ||
			sSentence[i] == 'a' ||
			sSentence[i] == 'E' ||
			sSentence[i] == 'e' ||
                        sSentence[i] == 'I' ||
                        sSentence[i] == 'i' ||
                        sSentence[i] == 'O' ||
			sSentence[i] == 'o' ||
			sSentence[i] == 'U' ||
			sSentence[i] == 'u') {
				++iVowels;
			}
			else {
				++iConsonants;
			}
		}
		else if (isspace(sSentence[i]) && isalpha(sSentence[i-1])) {
			//count the number of words
			++iNumWords;
		}
	}

	//calculate the average word length
	dAverageLength = (double)iNumLetters / iNumWords;

	//print the statistics of the sentence
	printf("\nNumber of vowels in the sentence = %d\n", iVowels);
	printf("Number of consonants in the sentence = %d\n", iConsonants);
	printf("Average word length: %.2lf\n", dAverageLength);

	return 0;
}
