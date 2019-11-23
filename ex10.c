#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=0;
	while(i<argc){
		if(argv[i] == 'A'||'a'||'E'||'e'||'I'||'i'||'O'||'o'||'U'||'u'){
		printf("%c is a vowel\n",argv[i]);}
		else{
		printf("%c is not a vowel\n",argv[i]);
	}
	i++;
	}
return 0;
}

//Observation, switch statement works only on integers. If we want to use it for characters then we must use ascii