#include<stdio.h>
int main(){
    int n,attempt;
    scanf("%d",&n);
    int count=0,trigger=0,fail=0,position=0;

    int i=1;
    while(i<=n){
        scanf("%d",&attempt);
        if(attempt==0){
            count++;
            trigger++;
            if(trigger>fail){
                fail=trigger;
                if(fail<=3){
                    position=i;
                }
            }
        }else{
            trigger=0;
        }
        i++;

    }
    if(fail<3){
        printf("Lock Triggered At Attempt: Not Locked\n");
    }else{
        printf("Lock Triggered At Attempt:%d\n",position);
    }
    printf("Total Failed Attempts:%d\n",count);






    return 0;
}