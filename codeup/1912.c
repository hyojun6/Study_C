#include <stdio.h>
int result = 1;

int f(int a) {
  if(a!=0) {
    result*=a;
    f(a-1);
  }
}

int main(void) {
  int a;
  scanf("%d", &a);
  f(a);
  printf("%d", result);
  return 0;
}