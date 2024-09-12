#include <stdio.h>

int f(int a) {
  if(a==1) {
    return 1;
  } else {
    return (a*f(a-1));
  }
}

int main(void) {
  int a;
  scanf("%d", &a);
  printf("%d", f(a));
  return 0;
}