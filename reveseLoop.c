#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(;n!=0;n=n/10){
        printf("%d",n%10);
        // int digit =n%10;
        // reverse=reverse*10+digit;
        // n=n/10;
    }
}