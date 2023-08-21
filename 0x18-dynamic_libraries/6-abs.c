/**
* _abs - Prints the absolute value of a number(int)
* @num: Parameter- takes an int argument and pass to the function at execution
* Return: returns inverse of number if less than 0, and otherwise number
*/

#include "main.h"

int _abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

