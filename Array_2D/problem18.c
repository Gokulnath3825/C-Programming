#include<stdio.h>
int main(){
    int r,c,sum,Diff,d1;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<r;k++){
                for(int l=0;l<c;l++){
                    sum=a[i][j]-a[k][l];
                }
                if(sum<d1){
                    d1=sum;
                    if(d1<0){
                        Diff=-d1;
                    }else{
                        Diff=d1;
                    }
                }
            }
        }
    }
    printf("%d",Diff);
            






    return 0;
}