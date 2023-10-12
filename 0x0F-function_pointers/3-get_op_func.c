#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator
 *
 * Return: result of operation or Null if fails
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);

		}
		i++;
	}
	return (NULL);
}
