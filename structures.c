#include <stdio.h>

typedef struct {
  char * username;
  char * email;
  int id;
} User;

int main() {
  User user;
  user.username = "otistav";
  user.email = "sammbocharov@gmail.com";
  user.id = 1;
  printf("User id is %d, username is %s, email is %s", user.id, user.username, user.email);
  return 0;
  
}
