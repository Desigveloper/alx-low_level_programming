/**
 * factorial - returns the factorial of a given number recursively
 * @n: param number to be calculated
 *
 * Return: product if success, 1 if 0, -1 as error
 */

int factorial(int n)
{

	if (n < 0) /* error case */
		return (-1);
	else if (n == 0) /* base case*/
		return (1);

	return (n *  factorial(n - 1));
}
