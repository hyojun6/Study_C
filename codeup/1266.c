#include <stdio.h>

int main(void) {
  int a;
  int num;
  int sum=0;
  scanf("%d", &a);
  for(int i=1; i<=a; i++) {
    scanf("%d", &num);
    sum += num;
  }
  printf("%d", sum);
  return 0;
}