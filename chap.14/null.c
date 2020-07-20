#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p = (int*)malloc(sizeof(int));
  p = NULL;
  printf("%d\n", *p);
  free(p);
  return 0;
}
