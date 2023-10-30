#include "main.h"
/**
 * _sqrt_recursion - fills memory
 * @n: data
 *
 * Return: char
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}
/** 
  * find_sqrt - find square root
  * @n: num
  * @k: num
  * Retunr: square root
  */
int find_sqrt(int n, int k)
{
	if (k > ((n / 2) + 1))
		return (-1);
	else if ((n / k) == k && (n % k) == 0)
		return (k);
	else
		return (find_sqrt(n, k + 1));
}
