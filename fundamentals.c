// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE    80 // constant defination for buffer size
#define NUM_INPUT_SIZE 10 // constant defination for numeric input size

#include "fundamentals.h"
int main(void) {
	fundamentals();
}

void fundamentals(void) {

	///* Version 1 */
	//	printf("*** Start of Indexing Strings Demo ***\n");

	//	// Declare character arrays for input and numeric input
	//	char    buffer1[BUFFER_SIZE];
	//	char    numInput[NUM_INPUT_SIZE];

	//	size_t  position;

	//	//Continue the loop until the user enters 'q'
	//	do {

	//		// Prompt the user to input a non-empty string
	//		printf("Type not empty string (q - to quit):\n");

	//		// Read a line of input into the 'buffer1' array
	//		fgets(buffer1, BUFFER_SIZE, stdin);

	//		// Remove the newline character at the end of the input
	//		buffer1[strlen(buffer1) - 1] = '\0';

	//		// Check if the entered string is not 'q'
	//		if (strcmp(buffer1, "q") != 0) {
	//			// Prompt the user to input a character position within the string
	//			printf("Type the character position within the string:\n");

	//			// Read a line of input into the 'numInput' array
	//			fgets(numInput, NUM_INPUT_SIZE, stdin);

	//			// Remove the newline character at the end of the input
	//			numInput[strlen(numInput) - 1] = '\0';

	//			// Convert the numeric input to an integer
	//			position = atoi(numInput);

	//			// Check if the position is greater than or equal to the string length
	//			if (position >= strlen(buffer1)) {

	//				// Adjusting the position to the maximum available index
	//				position = strlen(buffer1) - 1;
	//				printf("Too big... Position reduced to max. available\n");
	//			}
	//			// Print the character found at the specified position
	//			printf("The character found at %d position is \'%c\'\n",
	//				(int)position, buffer1[position]);
	//		}
	//	} while (strcmp(buffer1, "q") != 0);
	//	
	//	printf("*** End of Indexing Strings Demo ***\n");

	//	printf("\n");

	/* Version 2 */
		printf("*** Start of Measuring Strings demo ***\n");
		char buffer2[BUFFER_SIZE];
		
		// Loop will continue until the user enters 'q'
		do {
			// Prompt the user to input a string
			printf("Type a string (q - to quit):\n");

			// Read a line of input into the 'buffer2' array
			fgets(buffer2, BUFFER_SIZE, stdin);

			// Remove the newline character at the end of the input
			buffer2[strlen(buffer2) - 1] = '\0';

			// Check if the entered string is not 'q'
			if (strcmp(buffer2, "q") != 0)
				// Print the length of the entered string
				printf("The length of \'%s\' is %d characters\n",
					buffer2, (int)strlen(buffer2));

		} while (strcmp(buffer2, "q") != 0);
		
		printf("*** End of Measuring Strings Demo ***\n");

		printf("\n");

	/* Version 3 */
		printf("*** Start of Copying Strings Demo ***\n");

		// Declare character arrays for the source and destination strings
		char destination[BUFFER_SIZE];
		char source[BUFFER_SIZE];

		// Start a loop that continues until the user enters 'q'
		do {
			// Reset the destination string to an empty string
			destination[0] = '\0';
			printf("Destination string is reset to empty\n");

			// Prompt the user to input the source string
			printf("Type the source string (q - to quit):\n");

			// Read a line of input into the 'source' array
			fgets(source, BUFFER_SIZE, stdin);


			source[strlen(source) - 1] = '\0'; // Remove the newline character at the end of the input

			// Check if the entered string is not 'q'
			if (strcmp(source, "q") != 0) {
				// Copy the source string to the destination string
				strcpy(destination, source);

				// Print the new destination string
				printf("New destination string is \'%s\'\n\n", destination);
			}

		} while (strcmp(source, "q") != 0);

		printf("*** End of Copying Strings Demo ***\n");
	}