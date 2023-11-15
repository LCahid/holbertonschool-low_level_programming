#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int i, x= 0, y= 0, z= 0;
	char c[29];
	for (i=0;i<24;i++)
		c[i] = 'c';
	srand(time(NULL));
	while ((x + y + z) != 269)
	{
		x = rand() % 127;
		y = rand() % 127;
		z = rand() % 127;
	}
	c[i++] = y;
	c[i++] = x;
	c[i++] = z;
	c[i++] = 127;
	c[i] = '\0';
	printf("%s", c);
	return 0;
}
