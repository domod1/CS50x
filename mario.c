#include <stdio.h>
#include <cs50.h>


int main(void)

{

  int n;
  do
  {
    n = get_int("Size: ");
  }
  while (n < 1 || n > 8);

  int i = 1;
  for(; i <= n; i++)
  {

    for(int j = n-i; j > 0; j--)
    {
      printf(" ");
    }

    for(int j = i; j > 0; j--)
    {
      printf("#");
    }

    printf("  ");

    for(int j = i; j > 0; j--)
    {
      printf("#");
    }
      printf("\n");
  }
}

