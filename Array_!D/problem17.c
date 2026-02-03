#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0;j<n/2;j++){
        if(arr[j]!=arr[n-1-j]){
            count++;
            break;
        }
    }

    if(count==0){
        printf("Yes");
    }
    else{
        printf("No");
        
    }





    return 0;
}