#include <stdio.h>
#include <math.h>
int main()
{
  double x = 12.34;
  int i = -5, j = 2;
  int a, b, c;
  a = ceil(x);                       // ceil(x) : x이상의 최소 정수값
  b = floor(x);                      // floor(x) : x미만의 최대 정수값
  c = pow(4, j);                     // pos(x, y) : xy의 값
  printf("abs(-5) = %d \n", abs(i)); // abs(x) : x의 절대값
  printf("ceil(12.34) = %d \n", a);
  printf("cos(10) = %f \n", cos(10)); // cos(x) : x의 cos값
  printf("exp(2) = %.f \n", exp(j));  // exp(x) : x의 지수값
  printf("floor(12.34) = %d \n", b);
  printf("sqrt(2) = %5f \n", sqrt(j)); // sqrt(x) : x의 제곱근
  printf("pow(4, 2) = %d \n", c);
}