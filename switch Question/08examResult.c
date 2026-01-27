#include<stdio.h>
int main(){
    int attandance;
    scanf("%d",&attandance);
    int marks;
    scanf("%d",&marks);
    if(attandance>75){
        if (marks>=75){
            printf("Distinction");
        }
        else if(marks>=50 && marks<75){
            printf("Pass");
        }
        else{
            printf("Fail");
        }
        
    }
    else{
        printf("Fail");
    }
}