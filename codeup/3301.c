#include <stdio.h>

int f(int n) {
  int num = 0;
  num += n / 50000;
  n = n % 50000;
  num += n / 10000;
  n = n % 10000;
  num += n / 5000;
  n = n % 5000;
  num += n / 1000;
  n = n % 1000;
  num += n / 500;
  n = n % 500;
  num += n / 100;
  n = n % 100;
  num += n / 50;
  n = n % 50;
  num += n / 10;
  n = n % 10;
  return num; }

int main(void) {
  int price;
  scanf("%d", &price);
  printf("%d", f(price));
  return 0; }