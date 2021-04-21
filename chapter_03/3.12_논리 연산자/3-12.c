#include <stdio.h>
int main()
{
  int a = 4, b = 7, c, d, e;
  c = a > 2 && b <= 7; // 둘다 참이므로 참(논리곱)
  printf("c = %d \n", c);
  d = a < 2 || b <= 7; // a가 거짓 b는 참이므로 참(논리합)
  printf("d = %d \n", d);
  e = !a; // a가 참(0이 아님)이므로 거짓(논리부정)
  printf("e = %d \n", e);
}