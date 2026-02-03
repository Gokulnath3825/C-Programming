#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=arr[0];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0;j<n;j++){
        if(arr[j]<min && arr[j]>0){
            min=arr[j];
            count=1;
        }
    }
    if(count!=0){
        printf("%d",min);
    }else{
        printf("No positive");
    }






    return 0;
}