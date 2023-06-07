/**
 * factorial - returns the factorial of a given number recursively
 * @n: param number to be calculated
 *
 * Return: product if success, 1 if 0, -1 as error
 */

int factorial(int n)
{
	int iFactorial = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	iFactorial += factorial(n - 1);
	
	return (iFactorial);
}
