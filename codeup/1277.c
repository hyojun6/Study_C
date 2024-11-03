#include <stdio.h>

int main(void) {
    int n, num;
    int f = 0, m = 0, e = 0;
    int a;

    scanf("%d", &n);
    a = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (i == 1)
            f = num;
        if (i == a)
            m = num;
        if (i == n)
            e = num;
    }
    printf("%d %d %d\n", f, m, e);

    return 0;
}