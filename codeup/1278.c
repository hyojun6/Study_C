// #include <stdio.h>

// int main(void) {
//   char a;
//   int num=0;
//   while((a = getchar()) != EOF)
//     num++;
//   printf("%d", num);
//   return 0;
// }
// #include <stdio.h>

// int main(void) {
//     char a;
//     int num = 0;

//     while ((a = getchar()) != '\n')
//         num++;

//     printf("%d\n", num);

//     return 0;
// }

#include <stdio.h>
int main(void) {
    int num;
    scanf("%d", &num);
    int i=0;
    while(num >= 1) {
        num /= 10;
        i++;
    }
    printf("%d", i);
    return 0;
}