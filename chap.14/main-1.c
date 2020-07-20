#include <stdio.h>
#include <stdlib.h>

void f(void){
	int *n = (int *)malloc(10*sizeof(int));
	n[10]=1;
	free(n);
}



int main(){
	f();
	return 0;
}

