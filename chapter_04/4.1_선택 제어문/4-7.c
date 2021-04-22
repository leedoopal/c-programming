#include <stdio.h>
#pragma warning(disable : 4996)
int main()
{
  int score = 0;
  printf("성적 입력 : ");
  scanf("%d", &score); // 변수 score에 성적 입력
  if (score >= 90)
    printf("학점은 A \n");
  else if (score >= 80)
    printf("학점은 B \n");
  else if (score >= 70)
    printf("학점은 C \n");
  else if (score >= 60)
    printf("학점은 D \n");
  else
    printf("학점은 F \n");
}