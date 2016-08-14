// This is the main file for email_generator

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "email_generator.h"

int main(void) {
  int *num = 0;
  bool valid = true;

  printf("Please insert the number of emails you wish to generate.");

  while(valid) {

  if (scanf("%d", num) == 1) {
    email_generator(*num);
    return 1;
    valid = false;
  } else {
    printf("Insert a valid input - should be > 0 and < 100.");
  }
}
}
