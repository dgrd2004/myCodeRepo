#include <stdio.h>

struct user {
  const char * first_name;
  const char * last_name;
  const char sex;
  int age;
  bool married;
};

void print_message ( struct message user_data ) {
  printf ( " User name is: %s %s, sex identifier is set to %c.", user_data.first_name, user_data.last_name, user_data.sex );
}

int main ( void ) {
  struct user tina = { "Cristhian", "Rodriguez", 'm', 13, false };
  print_message( tina );
  puts ( "This is a test C program that is been version controlled by Git and GitHub..." );
  return 0;
}
