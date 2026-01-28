#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%m==0){
            sum+=i;
        }
    }
    printf("%d",sum);

}