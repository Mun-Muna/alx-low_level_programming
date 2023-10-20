#include <stdio.h>
void print1(void) __attribute__((constructor));
void print1(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
