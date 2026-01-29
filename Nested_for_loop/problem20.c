#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int k=1;k<=2*(n-i);k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int k=1;k<=2*(n-i);k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
    
    return 0;
}