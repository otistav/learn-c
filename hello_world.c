#include <stdio.h>

int main() {
  // this way we can define variables: [type of variable] [name of variable] = [value];
  int a = 5;
  // %d is to print decimal value
  printf("%d", a);
  // this way we define an array with n rows and 3 columns
  int arr[][3] = {
    { 4, 5, 6 },
    { 3, 4, 5 },
    { 4, 5, 5 }
  };
  // For loop. Nothing special, syntax as in most of the languages
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] < 5) {
        printf("%d", arr[i][j]);
      }
    }
  }
  return 0;
}
