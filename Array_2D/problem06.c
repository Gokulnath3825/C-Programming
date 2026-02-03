#include <stdio.h>
int main() {
    int r, c;
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int sum=0;
    for(int i = 0; i < c; i++){
        sum+=a[0][i];
    }
    int max = sum;
    int min = sum;
    for(int i = 0; i < r; i++){
        int sum = 0;
        for(int j = 0; j < c; j++){
            sum += a[i][j];
        }
        if(sum > max)
            max = sum;
        if(sum < min)
            min = sum;
    }
    int Diff = max - min;
    printf("%d", Diff);
    
    return 0;
}
