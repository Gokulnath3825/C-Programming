#include<stdio.h>
int main(){
    int days,expensive;
    scanf("%d",&days);
    int sum=0;
    int over=0;
    
    for(int i=0;i<days;i++){
        scanf("%d",&expensive);
        sum+=expensive;
        if(expensive>1000){
            over++;
        }
    }
    printf("Total Expense: %d\n",sum);
    if(over==0){
        printf("Overspend Days %d",over);
    }
    else{
        printf("Overspend Days %d",over);
        
    }


}