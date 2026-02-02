#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[n-1];//5 17
    arr[n-1]=-1;

    for(int i=n-2;i>=0;i--){
        int current=arr[i];//5 3 4 17
        
        arr[i]=max;//5=5 4=5 3=5 2=5 
        if(current>max){//5>3  3>5 4>5 17>5
            max=current; //5 17
        }

    
    }

    for(int i=0;i<n;i++){//
        printf("%d ",arr[i]);
        
    }
}


