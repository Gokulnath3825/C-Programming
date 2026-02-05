#include<stdio.h>
int main(){
    int r,c,index=0,min=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){ // row
        for(int j=0;j<c;j++){ //column
            scanf("%d",&a[i][j]);
            min+=a[i][j];
        }
    }
    
    for(int i=0;i<r;i++){
        int sum = 0;
        if(a[i][0]!=0){
            for(int j=0;j<c;j++){
                
                sum += a[i][j];
            }
            if(sum<min){
                index=i;
                min=sum;
            }
        }
    }
    printf("%d", index);









    return 0;
}