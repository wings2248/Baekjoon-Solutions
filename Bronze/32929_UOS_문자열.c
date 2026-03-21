#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);

    if (x % 3 == 1)
        printf("U\n");
    else if (x % 3 == 2)
        printf("O\n");
    else {
        printf("S\n");
    }

    return 0;
}