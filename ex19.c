#include "dbg.h" 
#include <stdio.h>
#include <stdlib.h>

void test_debug()
{
	// notice you don't need the \n
	debug("I have Brown Hair.");
	
	// passing in arguments like printf
	debug("I am %d years old.",37);
}

void test_log_err()
{
	log_err("I believe everything is broken.");
	log_err("There are %d problems in %s.", 0, "space");
}

void test_log_warn()
{
	log_warn("You can safely ignore this.");
	log_warn("Maybe consider looking at: %s.","/etc/passwd");
}

int main(int argc, char *argv[])
{
	check(argc==2, "Need an argument.");
	test_debug();
	test_log_err();
	test_log_warn();
	return 0;
error:
	return 1;
}