#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int row=-1;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(a[i][j]%2==0 && a[i][j+1]%2!=0 ||a[i][j+1]%2==0 && a[i][j]%2!=0){
                count=1;
        }
    }
        if(count==1){
            row=i;
            printf("%d ",row);
        } 
    }


    return 0;
}