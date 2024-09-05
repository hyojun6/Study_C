#include <stdio.h>

void f(int k) {
  if(k <= 0) return;
  printf("*");
  f(k-1);
}

int main() {
  int n;
  scanf("%d", &n);
  f(n);
  printf("\n");
}