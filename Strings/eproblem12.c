#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for (int i=0;str[i]!='\0';i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))) {
                count++;
        }
    }

    printf("%d", count);
    return 0;
}
