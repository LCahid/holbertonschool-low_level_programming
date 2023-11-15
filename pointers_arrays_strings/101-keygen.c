#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int i, x= 0, y= 0;
	char c[29];
	for (i=0;i<26;i++)
		c[i] = 'c';
	srand(time(NULL));
	while ((x + y) != 198)
	{
		x = rand() % 198;
		y = rand() % 198;
	}
	c[i++] = x;
	c[i++] = y;
	c[i] = '\0';
	printf("%s", c);
	return 0;
}
