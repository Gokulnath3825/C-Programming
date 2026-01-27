#include<stdio.h>
int main(){
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:{
        int age;
        int ticketPrice=300;
        scanf("%d",&age);
        if(age<12){
            printf("Fare ₹ %d",ticketPrice/2);
        }
        else if(age>=60){
            ticketPrice=ticketPrice - (ticketPrice*0.33);
            printf("Fare ₹ %d",ticketPrice);
        }
        else{
            printf("Fare ₹ %d",ticketPrice);
        }
    }
    break;
    case 2:{
        int age;
        int ticketPrice=1000;
        scanf("%d",&age);
        if(age<12){
            printf("Fare ₹ %d",ticketPrice/2);
        }
        else{
            printf("Fare ₹ %d",ticketPrice);

        }

    }


}
    
}