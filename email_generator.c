#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "email_generator.h"

void email_generator(int num) {

  const char alphanumeric[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
  const int len_alpha = sizeof(alphanumeric);

  char com[] = "com";

  char new_email[26];
  int len = 26;

  while (num > 0) {

    int placeholder = 0;

    for(int i = 0; i < 10; ++i) {
      new_email[i] = alphanumeric[rand() % len_alpha - 1];
      placeholder = i;
    }

    new_email[placeholder] = '@';

    for(int z = 0; z < 10; ++z){
      ++placeholder;
      new_email[placeholder] = alphanumeric[rand() % len_alpha - 1];
    }

    ++placeholder;

    new_email[placeholder] = '.';

    for(int x = 0; x < 3; ++x){
      ++placeholder;
      new_email[placeholder] = com[x];
    }
    ++placeholder;

    new_email[placeholder] = '\0';

    for(int y = 0; y < len; ++y) {
      printf("%c", new_email[y]);
    }
    printf("\n");
    --num;
  }
  }
