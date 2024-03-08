#include <stdio.h>

int main(void) {
  int a = 10;
  int b;

  printf("Enter a random number? ");
  scanf("%i", &b);
  if (b < a) {
    printf("Your prediction is lower than expected.\n");
  } else if (b > a) {
    printf("Your prediction is higher than expected.\n");
  } else {
    printf("Your prediction is spot on! 👏\n");
  }
  printf("Compiled successfully. \n");
}