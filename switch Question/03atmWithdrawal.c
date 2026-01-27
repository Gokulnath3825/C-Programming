#include<stdio.h>
int main(){
    int accType;
    scanf("%d",&accType);
    switch (accType){
    case 1:{
        int balance;
        scanf("%d",&balance);
        int withdraw;
        scanf("%d",&withdraw);
        if (balance >= withdraw)
        {
            printf("Transaction Successful");
        }
        else
        {
            printf("Insufficient Balance");
        }
    }
        break;
    case 2:{
        int balance;
        scanf("%d",&balance);
        int withdraw;
        scanf("%d",&withdraw);
        if (withdraw <= 5000)
        {
            if (balance >= withdraw)
            {
                printf("Transaction Successful");
            }
            else
            {
                printf("Insufficient Balance");
            }
        }
        else
        {
            printf("Limit Exceeded");
        }

    }
        break;
    default:
        printf("Invalid Account Type");
        break;
    }
}