#include<stdio.h>
int main(){
    int r,c,count=0,count1=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){ // row
        for(int j=0;j<c;j++){ //column
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        count=0;
        for(int j=0;j<c;j++){
            for(int k=2;k<c;k++){
                if(a[i][j]%k==0 ){
                    count++;
                }
                if(count==1){
                    count1++;
        
                }
            }
        }
    }
    printf("%d",count1);




    return 0;
}