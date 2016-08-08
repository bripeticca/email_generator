// This is the main file for email_generator

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "email_generator.h"

int main(void) {
  int num;
  bool valid = true;

  printf("Please insert the number of emails you wish to generate.")

  while(valid) {

  if (scanf("%d", num) == 1 || num == 0 || num > 100) {
    return email_generator(num);
    valid = false;
  } else {
    printf("Insert a valid input - should be > 0 and < 100.")
  }
}
}
