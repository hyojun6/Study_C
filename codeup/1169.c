#include <stdio.h>
int main(void) {
  int y;
  scanf("%d", &y);
  int n= 2012-y+1;
  int a;
  (1900<=n && 2000>n) ? (a=1) : (a=3); //1 or 3
  (a==1) ? (n-=1900) : (n-=2000);
  printf("%d %d", n, a);
}