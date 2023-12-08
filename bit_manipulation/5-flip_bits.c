/**
  * flip_bits - sets the value of a bit to 0 at given index
  * @n: number
  * @index: index of bit which this function returns
  * Return: the value of a bit at a given index. if error ocured -1
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
