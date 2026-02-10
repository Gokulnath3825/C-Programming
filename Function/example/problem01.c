#include<stdio.h>

void interest(int a,int b,int c){
    float cal=(a*b*c)/100;
    printf("%.2f",cal);




}

int main(){
    int p,r,t;
    scanf("%d %d %d",&p,&r,&t);
    interest(p,r,t);

}