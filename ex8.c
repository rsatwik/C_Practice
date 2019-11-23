#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	
	if (argc == 1) {
		printf("You only have one argument. Try harder.\n");
	}
	else if (argc > 1 && argc < 4){
		printf("Your arguments:\n");
		for(i=0; i < argc; i++){
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	else {
		printf("You have too many arguments. Take a break.\n");
	}
	
	return 0;
}

// Observation: The program fails if I run printf using single quotes instead of double quotes
//...................................................................
// Change the && to a || so you get an or instead of an and test and see how that works

// Ans, the else if condition always stands true
//...................................................................