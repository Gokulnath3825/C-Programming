#include<stdio.h>
int main(){
    int passenger,ticketFare;
    scanf("%d",&passenger);
    int sum=0;
    
    for(int i=0;i<passenger;i++){
        scanf("%d",&ticketFare);
        sum+=ticketFare;
    }
    printf("Total Collection ₹%d",sum);
}