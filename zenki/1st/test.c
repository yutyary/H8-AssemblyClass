#include <stdio.h>

int main(void) {
  int a,b;

  b = 3;
  a = b++;
  printf("%d %d\n",a,b);

  return 0;
}
