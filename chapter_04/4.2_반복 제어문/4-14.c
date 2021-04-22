#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
  int i, j;
  printf("\n");
  for (i = 2; i <= 9; i++)
    printf(" - %d단- ", i);
  printf("\n");
  for (i = 1; i <= 9; i++)
  {
    for (j = 2; j <= 9; j++)
    {
      printf(" %dx%d=%2d ", j, i, j * i);
    }
    printf("\n");
  }
}