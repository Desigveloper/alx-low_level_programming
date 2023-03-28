#include "main.h"

/**
* _abs - Prints the absolute value of a number(int)
* @num: Parameter- takes an int argument and pass to the function at execution
* Return: Always returns 0 (Success)
*/

int _abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}
