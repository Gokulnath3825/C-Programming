#include<stdio.h>
int main(){
    int choice;
    int units;
    int bill=0;
    int Subsidy=80;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:{ //Domestic
        scanf("%d",&units);
        if(units<=100){
            bill=units*3;
            printf("₹%d",bill);
        }
        else if(units<=200){
            bill=100*3+(units-100)*5;
            printf("₹%d",bill-Subsidy);
        }
        else{
            bill=100*3+100*5+(units-200)*7;
            printf("₹%d",bill-Subsidy);
        }
        break;

    }
    case 2:{ //Commercial
        scanf("%d",&units);
        if(units<=100){
            bill=units*7;
            printf("₹%d",bill);
        }
        else{
            bill=100*7+(units-100)*10;
            printf("₹%d",bill);
        }
        break;
    
    }
    
    default:{
        printf("Invalid Input");
    }
        break;
    }
}