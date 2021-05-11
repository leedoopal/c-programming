#include <stdio.h>
#include <math.h>
int main()
{
  int x;
  int y;
  int z;
  printf("사다리꼴의 넓이를 구하기 위해 윗변, 밑변, 높이를 입력하시오\n");
  printf("윗변 : ");
  scanf("%d", &x);
  printf("밑변 : ");
  scanf("%d", &y);
  printf("높이 : ");
  scanf("%d", &z);

  double sum = (x + y) * z / 2;
  printf("윗변(%d), 밑변(%d), 높이(%d)를 가지는 사다리꼴의 면적은 %.3f입니다.", x, y, z, sum);
}