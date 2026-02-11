#include<stdio.h>
void digit(int n){
    int count=0;
    for(int i=n;i>0;i=i/10){
        count+=1;
    }
    printf("%d ",count);
}


int main(){
    int n;
    scanf("%d",&n);
    digit(n);
}