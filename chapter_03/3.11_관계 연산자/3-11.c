#include <stdio.h>
int main()
{
  int a = 4, b, c, d;
  b = a > 2; // a가 2보다 큰가를 비교, 겨로가가 참이므로 b에 1대입
  printf("b = %d \n", b);
  c = a < 2; // a가 2보다 작은가를 비교, 결과가 참이므로 c에 0대입
  printf("c = %d \n", c);
  d = a == 4; // a가 4인가를 비교, 결과가 참이므로 d에 1대입
  printf("d = %d \n", d);
}