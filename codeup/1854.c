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
    return (*a == '\0') ? 0 : (*a - '0') + f(a+1);
}

int main(void) {
    char a[20];
    scanf("%s", a);
    printf("%d", f(a));
    return 0;
}