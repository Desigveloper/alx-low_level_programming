/**
 * find_root - helper fun that calculates x**x to check with n
 * @n: base number
 * @x: iterator number
 * Return: x
 */
int find_root(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x <= n)
		return (find_root(n, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - calculates the natural square root of n.
 * @n: base number.
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 2));
}
