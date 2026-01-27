#include<stdio.h>
int main(){
    int choice;
    scanf("%d",&choice);
    int order;
    scanf("%d",&order);
    switch (choice){
        case 1:{
        int a = 50;
        printf("Delivery ₹%d",a);
        break;
        }
        case 2:{
        if(order<1000){
            int b=100;
            printf("Delivery ₹%d",b);
        }
        else{
            printf("Free Delivery");
        }
    }
        break;
        default:
        printf("Invalid Choice");
        break;
    }
}