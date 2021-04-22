#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
  int i, sum = 0; // 루프 변수 i는 정수형이어야함
  for (i = 1; i <= 10; ++i)
  {
    sum = sum + i;
    printf("%d번째부터 실행 : sum = %d \n", i, sum);
  }
  printf("1부터 %d까지의 합 = %d \n", i - 1, sum);
}