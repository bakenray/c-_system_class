#include <iostream>

int getCollatz(int num) {
  if(num % 2 == 0 ) {
    num = num / 2;
  } else {
    num = num * 3 + 1;
  }
  return num;
}
int collatzLength(int num) {
  int length = 1;
  int new_num = getCollatz(num);
  while(true) {
    length++;
    if(new_num == 1) {
      break;
    } else {
      new_num = getCollatz(new_num);
    }
  }
  return length;
}
int main() {
  int max = 0;
  for(int i = 1; i < 10000; i++) {
    int length = collatzLength(i);
    if(length > max) {
      max = length;
    }
  }
  std::cout << max << std::endl;
  return 0;
}