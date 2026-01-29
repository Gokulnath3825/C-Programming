#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    for(char i='A';i<=ch;i++){
        for(int j='A';j<=i;j++){
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}