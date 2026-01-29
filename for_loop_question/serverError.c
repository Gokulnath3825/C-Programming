#include<stdio.h>
int main(){
    int n, error;
    scanf("%d",&n);
    int sum=0;
    int over=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",& error);
        sum+= error;
        if( error>50){
            over++;
        }
    }
    printf("Total Errors: %d\n",sum);
    if(over==0){
        printf("Critical Hours: %d",over);
    }
    else{
        printf("Critical Hours: %d",over);
        
    }


}