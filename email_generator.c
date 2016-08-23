#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "email_generator.h"

void email_generator(int num) {
  const char alphanumeric[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
  const int len_alpha = sizeof(alphanumeric) - 1;
  // len_alpha has been subtracted by 1 so the algorithm below does not index
  // the null terminator.

  char com[] = ".com";
  char email[26];
  char len = 26;

  int midpoint = 10;  // the point before '@'
  int end = 21;       // represents the point just before '.com'

  while (num > 0) {

    int placeholder = 0;

    for(int i = 0; i < len; ++i){
      if ((i < midpoint) || (i > midpoint && i < end)){
        email[i] = alphanumeric[rand() % len_alpha];
      } else if (i == midpoint) {
        email[i] = '@';
      } else {
        email[i] = com[placeholder];
        ++placeholder;
      }
    }

    printf("%s\n", email);

    --num;
  }
}
