#include <stdio.h>
int sum;

int f(int n) {
  if(n) {
    sum+=n;
    f(n-1);
  } else {
    return sum;
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d", f(n));
}