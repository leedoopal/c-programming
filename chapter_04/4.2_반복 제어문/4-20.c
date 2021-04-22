#include <stdio.h>
int main()
{
  int num, sum = 0;

  // 무한 while 루프
  while (1)
  {
    printf("num(끝: 0)...? ");
    scanf("%d", &num);
    if (num == 0)
      break;
    sum = sum + num;
  }
  printf("sum = %d", sum);
}