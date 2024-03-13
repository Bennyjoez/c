#include <stdio.h>

int main(void)
{
  char c;

  printf("Do you agree?(y/n) ");
  scanf("%c", &c);

  if (c == 'y' || c == 'Y')
  {
    printf("Agreed. \n");
  }
  else if (c == 'n' || c == 'N')
  {
    printf("Don't agree. \n");
  }
}