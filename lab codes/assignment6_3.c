// PASSWORD GENERATOR.

/*
Write a program to generate a random one-time password of eight characters long. The password
should contain at least one small letter, one capital letter, one symbol, and one digit.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rpg(int n){
	int i = 0;
	int r = 0;
	srand((unsigned int)(time(NULL)));
    // srand function is used to generate different passwords everytime according to the system time.
	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnoqprstuvwyzx";
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	char symbols[] = "!@#$^&*?";
	char p[n];
	r = rand() % 4;
	for (i = 0; i < n; i++) {
		if (r == 1) {
			p[i] = numbers[rand() % 10];
			r = rand() % 4;
			printf("%c", p[i]);
		}
		else if (r == 2) {
			p[i] = symbols[rand() % 8];
			r = rand() % 4;
			printf("%c", p[i]);
		}
		else if (r == 3) {
			p[i] = LETTER[rand() % 26];
			r = rand() % 4;
			printf("%c", p[i]);
		}
		else {
			p[i] = letter[rand() % 26];
			r = rand() % 4;
			printf("%c", p[i]);
		}
	}
}
int main(){
	int n = 8;
	printf("Generated password is : ");
	rpg(n);
	return 0;
}



/* SOURCE CODE:
// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to randomly generates password
// of length N
void randomPasswordGeneration(int N)
{
	// Initialize counter
	int i = 0;

	int randomizer = 0;

	// Seed the random-number generator
	// with current time so that the
	// numbers will be different every time
	srand((unsigned int)(time(NULL)));

	// Array of numbers
	char numbers[] = "0123456789";

	// Array of small alphabets
	char letter[] = "abcdefghijklmnoqprstuvwyzx";

	// Array of capital alphabets
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	// Array of all the special symbols
	char symbols[] = "!@#$^&*?";

	// Stores the random password
	char password[N];

	// To select the randomizer
	// inside the loop
	randomizer = rand() % 4;

	// Iterate over the range [0, N]
	for (i = 0; i < N; i++) {

		if (randomizer == 1) {
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2) {
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3) {
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else {
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

// Driver Code
int main()
{
	// Length of the password to
	// be generated
	int N = 10;

	// Function Call
	randomPasswordGeneration(N);

	return 0;
}



*/


