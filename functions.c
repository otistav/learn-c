#include <stdio.h>

// this way we define functions. Nothing too complicated, like in most of the c-alike languages
int doubleInt(int a) {
  // Value of static variables is remembered when it's static. Just like clousered variable in function in js (yes, I'm silly and probably know nothing to compare it this way), but I don't care.
  static int count = 0;
  printf("Function invoked %d times\n", ++count);
  return a * 2;
}

int main() {
  int num = 7;
  int doubled = doubleInt(num);
  printf("%d\n", doubleInt(5));
  printf("%d\n", doubleInt(5));
  printf("%d\n", doubleInt(5));
  printf("%d\n", doubleInt(5));
  printf("%d\n", doubleInt(5));
  printf("%d\n", doubleInt(5));
  return 0;
}
