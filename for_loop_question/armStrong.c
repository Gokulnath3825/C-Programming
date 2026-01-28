#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=0;
    int b=n;
    int sum=0;
    int power;
    for(int i=n;i>0;i=i/10){
        num+=1;
    }
    for(int i=n;i>0;i=i/10){
        int a=i%10;
        power=1;
        for(int j=1;j<=num;j++){
            power=power*a;
        }
        sum+=power;
        
    }
    if(b==sum){
        printf("Yes");
    }
    else{
        printf("No");
    }


}