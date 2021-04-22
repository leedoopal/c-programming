#include <stdio.h>
int main()
{
  int i = 0, n;
  int sum = 0;
  printf("n=? ");
  scanf("%d", &n);
  do
  {
    sum = sum + i;
    i++;
  } while (i <= n); // 세미콜론을 쓰지 않으면 에러발생
  printf("i = %d \n", i);
  printf("i ~ %d까지 합 = %d \n", n, sum);
}