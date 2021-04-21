#include <stdio.h>
int main()
{
  int a, b, c;
  a = b = c = 0;
  a = ++b + ++c; // b와 c의 값을 1 증가하고 두 값을 더한 값을 a에 대입
  printf("a = ++b + ++c 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
  a = b++ + c++; // c의 값을 1 증가한 후 b와 더해서 a에 대입하고 b의 값을 1 증가
  printf("a = b++ + c++ 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
  a = b-- + --c; // c의 값을 1 감소한 후 b와 더해서 a에 대입하고 b의 값을 1 감소
  printf("a = b-- + --c 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
}