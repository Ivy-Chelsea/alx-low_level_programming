#include "3-calc.h"

/**
 * get_op_func - function pointer that selects correct function to perform
 * operation asked by user
 * @s: operator
 * Return: pointer to function corresponding to operator given as parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k;

	k = 0;

	while (ops[k].op)
	{
		if (strcmp(ops[k].op, s) == 0)
			return (ops[k].f);
		k++;
	}

	return (NULL);
}
