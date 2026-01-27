#include<stdio.h>
int main(){
    int choice;
    scanf("%d",&choice);
    char ch;
    scanf(" %c",&ch);
    switch (choice){
        case 1:{
            if(ch=='A'){
                int price=2500;
                printf("₹%d",price);
            }
            else if(ch=='B'){
                int price=2000;
                printf("₹%d",price);
            }
            else{
                printf("Invalid Input");
            }
        }
        break;
        case 2:{
            if(ch=='C'){
                int price=4000;
                printf("₹%d",price);
            }
            else if(ch=='D'){
                int price=3000;
                printf("₹%d",price);
            }
            else{
                printf("Invalid Input");
            }
        }break;
        default:
        printf("Invalid Input");
        break;
    }
    return 0;
}
