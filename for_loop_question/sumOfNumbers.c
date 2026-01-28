#include<stdio.h>
int main(){
    int N , sum;
    scanf("%d",&N);
    sum=0;
    for(int i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}
