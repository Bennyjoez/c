#include <stdio.h>

int main(void)
{
  char name[20];
  printf("What is your name? ");
  scanf("%s", name);
  printf("hello, %s\n", name);
  printf("Program compiled!\n");
  return 0;
}