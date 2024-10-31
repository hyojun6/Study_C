#include <stdio.h>

int main(void) { 
  int a, b=0;
  scanf("%d", &a);
  for(int i=a; i>=1; i--)
    if(a%i==0) b++;
  if(b==2)
    printf("prime");
  else
    printf("not prime");
  
  return 0;
}