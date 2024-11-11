#include <stdio.h>

int f(int n, int r) {
  if(n==r) return 1;
  if(r==1) return n;
  return f(n-1, r-1) + f(n-1, r);
}

int main(void) {
  int n, r;
  scanf("%d %d", &n, &r);
  printf("%d", f(n, r));
  return 0;
}

/*
#include <stdio.h>

int comb(int n, int r) {
    if(r==0 || n==r)
        return 1;
    else
        return comb(n-1, r-1)+comb(n-1, r);
}

int main(void) {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", comb(n, r));
}

*/