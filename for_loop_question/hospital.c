#include<stdio.h>
int main(){
    int Patients, Days;
    scanf("%d",&Patients);
    int sum=0;
    int over=0;
    
    for(int i=0;i<Patients;i++){
        scanf("%d",& Days);
        sum+= Days;
        if( Days>100){
            over++;
        }
    }
    printf("Total Patients: %d\n",sum);
    if(over==0){
        printf("Overcrowded Days: %d",over);
    }
    else{
        printf("Overcrowded Days: %d",over);
        
    }


}