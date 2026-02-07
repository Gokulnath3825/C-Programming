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
    int Diff;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int min=a[i][j];
            int max=a[i][j];
            for(int k=0;k<c;k++){
                if(a[i][k]>max){
                    max=a[i][j];
                }else if(a[i][k]<min){
                    min=a[i][k];
                }
            }
            Diff=max-min;
        }
        if(Diff<=1000){
            count++;
        }
    }
    printf("%d",count);


}