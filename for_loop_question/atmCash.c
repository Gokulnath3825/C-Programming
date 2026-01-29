#include<stdio.h>
int main(){
    int initialCash,n,withdrawal;
    scanf("%d",&initialCash);
    scanf("%d",&n);
    int total=0;
    int count=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&withdrawal);
        total+=withdrawal;
        if(withdrawal<5000){
            count++;
        }
    }
    int remain=initialCash-total;
    printf("Remaining cash : %d\n",remain);
    if(count==0){
        printf("Risk Count: %d",count);
    }
    else{
        printf("Risk Count: %d",count);
        
    }
    
}