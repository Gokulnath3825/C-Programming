#include <stdio.h>
int sumNatural(int n) {
    int sum = 0;
    for (int i=1;i<=n;i++) {
        sum +=i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int digit=sumNatural(n);

    printf("%d",digit);
    return 0;
}
