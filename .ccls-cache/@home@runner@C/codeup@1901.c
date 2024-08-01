#include <stdio.h>
int a=1;

int f(int n) {
  if (n!=0) {
    n--;
    printf("%d\n", a);
    a++;
    f(n);
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  f(n);
  
  return 0;
}