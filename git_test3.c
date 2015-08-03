#include <stdio.h>

struct user {
  const char * first_name;
  const char * last_name;
  const char sex;
  int age;
  int married;
  float paycheck;
};

void print_message ( struct user user_data ) {
  printf ( "User name is: %s %s, sex identifier is set to %c.\n", user_data.first_name, user_data.last_name, user_data.sex );
}

int main ( void ) {
  struct user tina = { "Cristhian", "Rodriguez", 'm', 13, 1, 10000.99 };
  print_message( tina );
  puts ( "This is a test C program that is been version controlled by Git and GitHub..." );
  return 0;
}
