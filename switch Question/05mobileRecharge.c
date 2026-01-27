#include<stdio.h>
int main(){
    int plan;
    scanf("%d",&plan);
    int paymethod;
    scanf("%d",&paymethod);
    switch (plan)
    {
    case 1:{
        int amount = 199;
        if(paymethod==11 || paymethod==12){
                amount=amount-20;
                printf("Pay ₹%d",amount);
            }
            else if(paymethod==13){
        
                printf("Pay ₹%d NoCashback",amount);
            }
            else{
                printf("Invalid Input");
            }
    }
    
    break;
    case 2:{
        int amount = 399;
        if(paymethod==11 || paymethod==12){
                amount=amount-20;
                printf("Pay ₹%d",amount);
            }
            else if(paymethod==13){
        
                printf("Pay ₹%d NoCashback",amount);
            }
            else{
                printf("Invalid Input");
            }
    break;
    default:
    printf("Invalid Plan");
    break;
}
}
}