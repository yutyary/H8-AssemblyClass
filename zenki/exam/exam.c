#include "h8-3052-iodef.h"

void sub_1() {
  int i = 0;
}

int sub_2() {
  return 0;
}

int sub_3() {
  int i = 1;
  return i;
}

int sub_4(int i) {
  int j;
  if(i == 0) {
    j = 1;
  } else {
    if(i == 1) {
      j = 10;
    } else {
      j = 100;
    }
  }
  
  return i;
}

int sub_5(int i) {
  int j,k = 0;
  
  for(i = 0; j < i; i++) {
    k += j;
  }

  return k;
}

int main() {
  int i;
  
  sub_1();
  sub_2();
  i = sub_3();
  i = sub_4(i);
  i = sub_5(i);

  return i;  

}
