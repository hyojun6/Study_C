#include <stdio.h>
int main(void) {
  int a;
  scanf("%d", &a);
  while(a!=0) {
    printf("*");
    a--;
  }
  return 0;
}