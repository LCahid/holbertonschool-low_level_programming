#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int i, x= 0, y= 0;
	char c[29];
	for (i=0;i<25;i++)
		c[i] = 'c';
	srand(time(NULL));
	while ((x + y) != 198)
	{
		x = rand() % 127;
		y = rand() % 127;
	}
	c[i++] = y;
	c[i++] = x;
	c[i++] = 127;
	c[i] = '\0';
	printf("%s", c);
	return 0;
}
