#include<stdio.h>
int main(){
    int totalLoss,units;
    scanf("%d",&totalLoss);
    int sum=0;
    int over=0;
    
    for(int i=0;i<totalLoss;i++){
        scanf("%d",&units);
        sum+=units;
        if(units>100){
            over++;
        }
    }
    printf("Total Loss:: %d\n",sum);
    if(over==0){
        printf("High Loss Days: %d",over);
    }
    else{
        printf("High Loss Days: %d",over);
        
    }


}