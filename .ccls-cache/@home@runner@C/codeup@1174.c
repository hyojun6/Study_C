#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  while(b>=30) {
    printf("%d %d", a, b-30);
    return 0;
  }
  while(a==0) {
    printf("23 %d", b+30);
    return 0;
  }
  printf("%d %d", a-1, b+30);
  return 0;
}