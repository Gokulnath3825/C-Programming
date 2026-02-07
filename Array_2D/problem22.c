#include<stdio.h>
int main(){
    int r,c,count1=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){ // row
        for(int j=0;j<c;j++){ //column
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        int count=1;
        for(int j=0;j<c-1;j++){
            if(a[i][j]>=a[i][j+1]){
                count=0;
                break;
            }
        }
        if(count==1){
            count1++;
        }

    }
    printf("%d",count1);







    return 0;
}
