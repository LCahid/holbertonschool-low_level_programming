#include <stdio.h>

int main(void){
	int i;
	char c[29];
	for (i=0;i<28;i++)
		c[i] = 'c';
	c[i] = '\0';
	printf("%s", c);
	return 0;
}
