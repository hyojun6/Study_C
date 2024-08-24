// #include <stdio.h>

// int main(void) {
//   char a;
//   int num=0;
//   while((a = getchar()) != EOF)
//     num++;
//   printf("%d", num);
//   return 0;
// }

#include <stdio.h>

int main(void) {
    char a;
    int num = 0;

    while ((a = getchar()) != '\n')
        num++;

    printf("%d\n", num);

    return 0;
}