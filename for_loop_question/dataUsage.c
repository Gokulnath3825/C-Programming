#include<stdio.h>
int main(){
    int n,usage;
    scanf("%d",&n);
    int sum=0;
    int over=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&usage);
        sum+=usage;
        if(usage>2){
            over++;
        }
    }
    printf("Total Data: %d\n",sum);
    if(over==0){
        printf("High Usage Days: %d",over);
    }
    else{
        printf("High Usage Days: %d",over);
        
    }


}