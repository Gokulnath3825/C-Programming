#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int maximum=arr[1]-arr[0];//1-7=-6   4. 5
    int minimum=arr[0];//7 1

    for(int i=1;i<n;i++){
        int profit=arr[i]-minimum;//1-7=-6 5-1=4 3-1=2  6-1=5 4-1=3
        if(profit>maximum){// -6>-6  4>-6 5>4 3>5
            maximum=profit; //4 5
        }
        if(arr[i]<minimum){
            minimum=arr[i];// 1 3 
        }

    }
    printf("%d",maximum);
    



    return 0;
}