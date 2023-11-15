#include <stdio.h>

int main(void){
	int i;
	for (i=0;i<28;i++)
		printf("%c", 'c');
	printf("%c", '\0');
	return 0;
}
