#include<stdio.h>
int main(){
    int battery,hours,reduce;
    scanf("%d",&battery);
    scanf("%d",&hours);
    int total=0;
    
    for(int i=0;i<hours;i++){
        scanf("%d",&reduce);
        total+=reduce;
    }
    int remain=battery-total;
    printf("%d",remain);
}