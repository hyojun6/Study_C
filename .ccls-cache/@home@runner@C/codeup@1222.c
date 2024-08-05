#include <stdio.h>
int main(void) {
  int t,a,b;
  scanf("%d %d %d", &t, &a, &b);

  for(int i=t; i<90; i+=5) {
    a+=1;
  }
  printf((a>b) ? "win" : a==b ? "same" : "lose");
  return 0;
}