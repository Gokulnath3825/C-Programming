#include<stdio.h>
int main(){
    int r,c,count1,count;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }

    count=0;
    for(int i=0;i<r;i++){
        count1=0;
        for(int j=0;j<c;j++){
            for(int k=c-1;k>=0;k--){
                if(a[i][j]==a[i][k-1]){
                    count1++;
                }
            }
            if(count1==c){
                count++;
            }
        }
    }
    printf("%d ",count);


    return 0;
}