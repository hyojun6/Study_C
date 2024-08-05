#include <stdio.h>

int main(void) {
  float a, b,c,d;
  scanf("%f %f %f %f",&a,&b,&c,&d);

  printf(a/b>c/d ? ">" : a/b==c/d ? "=" : "<");
  return 0;
}