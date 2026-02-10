#include<stdio.h>

int add(int a , int b){
    int sum=a+b;            // function
    return sum;
} 



int main(){
    int a=5,b=8;
    int sum=add(a,b);     // Function Call
    printf("%d",sum);

}