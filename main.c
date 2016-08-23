// This is the main file for email_generator

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "email_generator.h"

int main(void) {
  int num = 0;
  bool valid = true;

  printf("Please enter the number of emails you wish to generate.\n");

  while(valid) {
  if ((scanf("%d", &num) == 1) && num > 0) {
    email_generator(num);
    valid = false;
  } else {
    printf("Insert a valid input - should be greater than 0.\n");
  }
}
return 1;
}
