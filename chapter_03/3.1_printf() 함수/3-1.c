#include <stdio.h>
int main()
{
  char ctest = 'A';
  int i = 10, j = 20, k = 30;
  // printf()문의 인용부호 내 문자가 화면에 출력됨
  printf("간단한 출력 프로그램 \n");
  // 변수 c는 순서대로 %c와 %d에 대응됨.
  printf("c = %c, c의 아스키 코드값은 %d \n", ctest, ctest);
  // 변수 i, j, k는 순서대로 %문자와 대응됨
  printf("i = %d, j = %d, k = %d", i, j, k);
}