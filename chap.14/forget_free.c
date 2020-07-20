#include <stdio.h>
#include <stdlib.h>

int main(){
	int *n = (int *)malloc(sizeof(int));
	*n = 10;
	printf("%d\n", *n);
	return 0;
}
