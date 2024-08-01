#include <stdio.h>

int n;

int f(int n) {
  int num=0;
  for(int i=1; i<n+1/2; i++) {
    if(n%i==0) 
      num++;
  }
  return num+1;
}

int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
  return 0;
}