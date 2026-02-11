#include<stdio.h>
void perfect(int a){
    int sum=0;
    for(int i=0;i<a;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==a){
        printf("Perfect Number");
    }else{
        printf("Not Perfect Number");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    perfect(n);
}