#include "h8-3052-iodef.h"

int func_1(void)
{
  int i, j, k;

  j = func_2();

  return j;
}

int func_2(void)
{
  return 5;
}

int main(void)
{
  int i;

  i = func_1();

  return 0;
}
