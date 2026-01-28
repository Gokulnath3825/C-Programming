#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int pow;
    scanf("%d",&pow);
    int power=1;
    if(pow>=0){
        for(int i=1;i<=pow;i++){
            power=power*n;
        }
        printf("%d",power);
    }
}