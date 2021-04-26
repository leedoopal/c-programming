#include <stdio.h>
#include <math.h>
int main()
{
  int num = 1;
  while (num != 0)
  {
    printf("num = ? (0 : 종료) : ");
    scanf("%d", &num);
    if (num < 0)
    {
      // 음수면 continue 수행, 루프의 선두로 복귀
      printf("num : Negative number ! \n\n");
      continue;
    }
    printf("Squareroot of %d = %f \n\n", num, sqrt(num));
  }
  printf("The end \n");
}