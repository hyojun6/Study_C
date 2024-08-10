#include <stdio.h>

int main(void) {
  double h, w, avw, result;

  scanf("%lf %lf", &h, &w);
  if(h < 150) 
    avw = h-100;
  else if(h < 160)
    avw = (h-150)/2 + 50;
  else
    avw = (h-100) * 0.9;

  result = (w - avw) * 100 / avw;

  if(result <= 10)
    printf("정상");
  else if(result <=20)
    printf("과체중");
  else
    printf("비만");

  return 0;
}