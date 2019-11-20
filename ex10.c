#include <stdio.h>

int main(int argc, char *argv[])
{
	int i=1;
	char arg1[]=*argv[1];
	printf("%s\n",arg1);
#ifdef Debug
	while(*argv[i]!='\0'){
		char temp = *argv[i];
		switch(temp){
			case ('A'||'a'||'E'||'e'||'I'||'i'||'O'||'o'||'U'||'u'):
				printf("%c is a vowel\n",*argv[i]);
				break;
			default:
				printf("%c is not a vowel\n",*argv[i]);
		}
	i=i+1;
	}
#endif
return 0;
}
