#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "email_generator.h"

void email_generator(int num) {
  const char alphanumeric[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
  const int len_alpha = sizeof(alphanumeric) - 1;
  // len_alpha has been subtracted by 1 so the algorithm below does not index
  // the null terminator.

  char com[] = ".com";
  int midpoint; // point before "@"
  int end;	// point after "@"

  printf("Please enter the number of characters you'd like before '@' and after '@'.\n");

  while(true) {
      if(!(scanf("%d %d", &midpoint, &end))) {
	  printf("Please enter a valid number of emails.");
      } else {
	  break;
      }
  }
  
  end += midpoint; // fixes offset

  int len = midpoint + end + 5; // number of chars in midpoint + end + "@" + ".com"
  
  char *email = malloc((sizeof(char)) * len);

  while (num > 0) {

    int placeholder = 0;

    for(int i = 0; i < len; ++i){
      if ((i < midpoint) || (i > midpoint && i <= end)){
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
  free(email);
}
