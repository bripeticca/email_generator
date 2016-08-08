#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "email_generator.h"

void email_generator(int num) {

  int count = num;
  string email_begin;
  string email_end; // make sure email end includes the dot
  string *emails = malloc(sizeof(string) * num);

  const char alphanumeric[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
  const int len_alpha = sizeof(alphanumeric);

  char new_email[26];
  int len = 26;

  while (num > 0) {
    int placeholder = 0;

    for(int i = 0; i < 10; ++i) {
      new_email[i] = alphanumeric[rand() % len_alpha - 1];
      placeholder = i;
    }

    new_email[placeholder] = "@";

    for(int z = 0; z < 10; ++z){

      ++placeholder
    }

    string new_email_string;
    strcpy(new_email_string, new_email, len);
    new_email_string[len] = '\0';
    emails[num - 1] = new_email_string;
  }

  for(int x = 0; x < count; ++x) {
    printf("%s", emails[x]);
  }

  free(emails);
  }
