#include <stdio.h>

int main(void) {
  int num = 0;
  int result;
  scanf("%d", &num);
  result = num/10;
  if(num%10>=1)
    result++;
  printf("%d", result);
  return 0;
}