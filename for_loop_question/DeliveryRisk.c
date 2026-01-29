#include<stdio.h>
int main(){
    int n,delayMin;
    scanf("%d",&n);
    int sum=0;
    int over=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&delayMin);
        sum+=delayMin;
        if(delayMin>30){
            over++;
        }
    }
    printf("Total Delay: %d\n",sum);
    if(over==0){
        printf("Delayed Deliveries: %d",over);
    }
    else{
        printf("Delayed Deliveries: %d",over);
        
    }


}