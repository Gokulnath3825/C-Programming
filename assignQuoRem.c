#include <stdio.h>

int main() {
    int a, b;
    int q, r;
    scanf("%d %d", &a, &b);
    q = a;
    q /= b;

    r = a;
    r %= b;
    printf("%d %d", q, r);
    return 0;
}
