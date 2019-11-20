#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

#define debug(M, ...) fprintf(stderr, "DEBUG %s:%d: " M "\n",__FILE__,__LINE__,##__VA_ARGS__);

#define clean_errno() (errno == 0 ? "None" : strerror(errno))

#define log_err(M, ...) fprintf(stderr,"[ERROR] (%s:%d: errno: %s) " M  "\n",__FILE__,__LINE__,clean_errno(),##__VA_ARGS__);

#define check(A,M, ...) if(!(A)) {log_err(M,##__VA_ARGS__); errno=0; goto error;}


void test_debug()
{
	debug("Statement 1")
	debug("Statement 2")
}

int main(int argc, char *argv[])
{
	check(argc==2, "Need 1 argument.");
	test_debug();
	return 0;
error:
	return 1;
}