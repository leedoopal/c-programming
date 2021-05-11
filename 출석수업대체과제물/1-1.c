#include <stdio.h>
#include <math.h>
int main()
{
  int x;
  int y;
  printf("2개의 정수값을 입력하시오\n");
  printf("정수 x : ");
  scanf("%d", &x);
  printf("정수 y : ");
  scanf("%d", &y);
  printf("x(%d)와 y(%d)의 평균값에 부호를 반전한 값은 %d입니다.", x, y, -(x + y) / 2);
}