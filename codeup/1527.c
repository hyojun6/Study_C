#include <stdio.h>
int n;

char f(int n) {
  printf("%s",
         (n % 2 != 0 && n % 3 != 0 && n % 7 != 0 && n % 11 != 0 && n % 13 != 0)
             ? "prime"
             : "composite");
  return 0;
}

int main() {
  scanf("%d", &n);
  f(n);
  return 0;
}