#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 2){
		printf("ERROR: You need one argument.\n");
		// this is how you abort a program
		return 1;
	}

	int i=0;
	for(i=0;argv[1][i]!='\0';i++){
		char letter = argv[1][i];
		switch(letter){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("%d: %c (vowel)\n",i,letter);
				break;
			default:
				printf("%d: %c is NOT a vowel\n",i,letter);

		}
	}

return 0;
}
