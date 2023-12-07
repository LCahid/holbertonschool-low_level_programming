/**
  * get_bit - binary to unsigned int convertor
  * @n: number
  * @index: index of bit which this function returns
  * Return: the value of a bit at a given index. if error ocured -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
