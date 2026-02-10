#include<stdio.h>

void prime(int a){
    int prime=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            prime++;
        }
    }
    if(prime==2){
        printf("Prime");
    }else{
        
        printf("Not Prime");
    }

}



int main(){
    int n;
    scanf("%d",&n);
    prime(n);
}
