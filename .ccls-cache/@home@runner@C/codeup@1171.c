#include <stdio.h>

int main(void) {
  int a,b,c;
  int num;
  scanf("%d %d %d", &a, &b, &c);
  for(int i=0; i<2; i++) {
    if(a<b) {
      num=a;
      a=b;
      b=num;
    }
    if(b<c) {
      num=b;
      b=c;
      c=num;
    }
  }
  printf("%d %d %d", c,b,a);
  return 0;
}