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
  int j,k;
  for(i = 0; i < 10; i++) {
    for(j = 0; j < 10; j++) {
    }
  }
}

void main() {
  int i;
  sub_1();
  i = sub_2();
  

}
