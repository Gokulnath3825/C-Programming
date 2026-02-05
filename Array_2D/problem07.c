#include<stdio.h>
int main(){
    int r,c,count=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int small=1;
            int large=1;
            for(int k=0;k<c;k++){
                if(a[i][k]<a[i][j]){
                    small=0;
                    break;
                }
            }
            for(int l=0;l<r;l++){
                if(a[l][j]>a[i][j]){
                    large=0;
                    break;
                }
            }
            if(small&&large){
                count++;
            }
        }
    }
    printf("%d",count);



    return 0;
}