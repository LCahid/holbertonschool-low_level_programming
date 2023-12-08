/**
  * flip_bits -  returns the number of bits you would need to flip to get from one number to another.
  * @n: first number
  * @m: second number
  * Return: returns the number of bits you would need to flip to get from one number to another.
  */
int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			counter++;
		n >>= 1;
		m >>= 1;
	}
	return (counter);
}
