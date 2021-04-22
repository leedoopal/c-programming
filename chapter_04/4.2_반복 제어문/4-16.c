#include <stdio.h>
int main()
{
  int i, j;
  i = 2; // while문 초기식(i=2)

  // while문 조건식(i <= 9)
  while (i <= 9)
  {
    printf(" - %d단- ", i);
    i++;
  }
  printf("\n");
  i = 1;
  while (i <= 9)
  {
    j = 2;
    // 열을 만든다
    while (j <= 9)
    {
      printf(" %dx%d=%2d ", j, i, j * i);
      j++;
    }
    printf("\n");
    i++;
  }
}