// #include <stdio.h>

// int f(long long a) {
//   return (a<10) ? a : ((a%10) + f(a/10));
// }

// int main(void) {
//   long long a;
//   scanf("%lld", &a);
//   printf("%d", f(a));
//   return 0;
// }

#include <stdio.h>

int f(char *a) {
  int i=0;
  return (a[i]=='\0') ? 0 : a[i]+a[++i];
}

int main(void) {
    char a[1000];
    scanf("%s", a);
    printf("%d", f(a));
    return 0;
}