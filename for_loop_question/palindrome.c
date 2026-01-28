#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;
    int temp;
    int reverse=0;
    for(int i=n;i>0;i=i/10){
        temp=i%10;
        reverse=reverse*10+temp;
    }
    if(a==reverse){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}