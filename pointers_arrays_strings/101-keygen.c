#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int i, x= 0;
	char c[29];
	for (i=0;i<26;i++)
		c[i] = 'c';
	srand(time(NULL));
	x = rand() % 2;
	if (x == 1)
	{
		c[i++] = 120;
		c[i++] = 78;
	}
	else
	{
		c[i++] = 78;
		c[i++] = 120;
	}
	c[i] = '\0';
	printf("%s", c);
	return 0;
}
