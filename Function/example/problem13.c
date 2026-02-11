#include<stdio.h>
int power(int a,int b){
    int sum=1;
    for(int i=1;i<=b;i++){
        sum*=a;
    }
    return sum;

}
int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    int pow=power(n,p);
    printf("%d ",pow);
}