#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
  int i, n, c = 'A';
  while (1) // 조건에 따른 while 반복문
  {
    printf("횟수는? ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
      printf("%c", c);
      if (c == 'Q')
        goto end;
      c++;
    }
    printf("\n\n");
  }
end:
  printf("\n\n끝");
}