#include <stdio.h>
void print1() __attribute__((constructor));
void print1()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
