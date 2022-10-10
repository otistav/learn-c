#include <stdio.h>

int main() {
  int a = 8;
  // *variable - pointer creation, &a - address of a variable to store in ptr.
  int *ptr = &a;
  printf("Address of a is %p and value is %d", ptr, *ptr);
  return 0;
}
