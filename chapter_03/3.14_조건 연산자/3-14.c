#include <stdio.h>
int main()
{
  int a = 10, b;
  b = (a > 15) ? (a + 1) : (a - 1); // 조건을 만족하지 않으므로 a - 1을 수행
  printf("b = %d", b);
}