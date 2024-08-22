#include <stdio.h>
int main(void) {
  int n, num, a;
  int f,m,e;
  scanf("%d", &n);
  a=(n+1)/2;
  for(int i=1; i<=n; i++) {
    scanf("%d", &num);
    switch (i) {
    case 1:
      f=num;
      break;
    case a:
      m=num;
      break;
    case n:
      e=num;
      break;
    }
    default:
    num=num;
    break;
  }
  printf("%d %d %d", f, m, e);
  return 0;
}
