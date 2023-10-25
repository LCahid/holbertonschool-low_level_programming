#include <stdio.h>
#include <string.h>
/**
  * _atoi - reset to 98
  *
  * @dest: num
  * @src: num
  * Return: length
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			sign *= 1;
		}
		else if (s[i] <= 57 && s[i] >= 48)
		{
			num *= 10;
			num += s[i] - 48;
		}
		else
		{
			if (num != 0)
			{
				break;
			}
		}
		i++;
	}
	num *= sign;
	return (num);
}
