#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        int sq=i*i;
        sum=sum+sq;
    }
    printf("%d",sum);
    
}