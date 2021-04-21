#include <stdio.h>
int main()
{
  float a = 3.14;
  // int형의 자료 크기를 출력
  printf("int형의 크기는 = %ld바이트 \n", sizeof(int));
  // float형인 a의 크기를 출력
  printf("float형 변수 a의 크기는 = %ld바이트 \n", sizeof(a));
}