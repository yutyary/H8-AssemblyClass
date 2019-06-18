#include "h8-3052-iodef.h"
int main(void)
{
  int i = 10;
  if(i < 0){
    i = 0;
  }
  else{
    i = 255;
  }
  return 0;
}
