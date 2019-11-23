#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;

	// go through each string in argv
	// skip argv[0] as it is redundant
	while(i<argc){
		printf("arg %d: %s\n",i,argv[i]);
		i++;
	} 

	// let's make out own array of strings
	char *states[]={"California","Oregon","Washington","Texas"};
	int num_states = 4;
	
	i = 0;
	while(i<num_states){
		printf("state %d: %s\n",i,states[i]);
		i++;
	}

	return 0;
}
