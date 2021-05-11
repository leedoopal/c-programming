#include <stdio.h>
#pragma warning(disable : 4996)

int a, b, c;
int product(int x, int y); // 사용자 함수 원형

int main()
{
  printf("Enter a number between 1 and 100 : ");
  scanf("%d", &a);
  printf("Enter another number between 1 and 100 : ");
  scanf("%d", &b);

  // 함수 호출에 의해 두 수를 곱하고 결과를 출력
  c = product(a, b);
  printf("%d * %d = %d \n", a, b, c);
}

// 두 수의 곱을 계산하여 돌려주는 사용자 함수
int product(int x, int y)
{
  return (x * y);
}