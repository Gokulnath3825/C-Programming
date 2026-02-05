#include<stdio.h>
int main(){
    int r,c,found=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=1;k<r;k++){
                for(int l=1;l<c;l++){
                    if(a[i][j]==a[k][l]){
                        printf("%d",a[i][j]);
                        found=1;
                    }
                }
                
            }
            if(found==1){
                break;
            }
        }
    }
    return 0;
}