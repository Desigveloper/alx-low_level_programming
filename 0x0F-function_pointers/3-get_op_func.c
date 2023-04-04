#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function to perform
 * operation base user input
 * @s: the operator given by the user
 *
 * Return: pointer to the function that matches operator as a parameter
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


	for (i = 0; (ops[i].op); i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}

	return (NULL);
}
