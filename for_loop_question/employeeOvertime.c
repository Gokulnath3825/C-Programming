#include<stdio.h>
int main(){
    int n,overTime;
    scanf("%d",&n);
    int sum=0;
    int over=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&overTime);
        sum+=overTime;
        if(overTime>3){
            over++;
        }
    }
    printf("Total Overtime Hours: %d\n",sum);
    printf("Overtime Cost:  %d\n",sum*200);
    if(over==0){
        printf("Heavy Overtime Days: %d",over);
    }
    else{
        printf("Heavy Overtime Days: %d",over);
        
    }


}