#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	printf("You are %d miles away.\n",distance);
	printf("You have %f levels of power.\n",power);
	printf("You have %f awesome super powers.\n",super_power);
	printf("I have an initial %c.\n",initial);
	printf("I have a first name %s.\n",first_name);
	printf("I have a last name %s.\n",last_name);
	printf("My whole name is %s %c.%s.\n",first_name,initial,last_name);

	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n",bugs,bug_rate);
	
	unsigned long universe_of_defects = 1L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.\n",universe_of_defects);
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n",expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n",part_of_universe);	

	//this makes no sense, just a demo of something weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n",care_percentage);
	return 0;
}

//..............................................................
// See what happens if you try to print out the nul_byte variable along with %s versus %c.
// Ans, nul_byte prints 0 as integer and 'null' as a string and nothing as a char
//..............................................................
// Extra Credit

// Make the number you assign to universe_of_defects various sizes until you get a warning from the compiler.

// Ans, long fails one bit before the unsigned long
//..............................................................
// What do these really huge numbers actually print out?

// Ans, integer multiples of 2^10
//..............................................................
// Change long to unsigned long and try to find the number that makes it too big.

// Ans, for 2^64 the error printed is: 
// ex7.c:26:38: warning: overflow in implicit constant conversion [-Woverflow]
// unsigned long universe_of_defects = pow(2L,64); 
// So it breaks at 2^64 i.e. 64 bits
// But for 2^63 the value is printed as -9223372036854775808 i.e. a negative value
// For 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L the value printed out is 0 
//..............................................................
// Go search online to find out what unsigned does.

// Ans, Unsigned uses an extra bit which was intially used for determining sign of data to a bit that stores data hence extending the range of the information stored by one bit
//..............................................................
// Try to explain to yourself (before I do in the next exercise) why you can multiply a char and an int.

// Ans, Since in C a character is just an integer
//..............................................................