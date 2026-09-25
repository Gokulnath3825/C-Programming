#include<stdio.h>

int main(){

    int size;

    scanf("%d",&size);

    int arr[size];

    for(int i=0;i<size;i++){

        scanf("%d",&arr[i]);

    }
    
    int max=arr[0];

    int secondLargest=0;
 
    for(int j=0;j<size;j++){

        if(arr[j]>max) {

            secondLargest=max;

            max=arr[j];    
        }

        else if(arr[j]<max && arr[j]>secondLargest){  // 4000<4000. &&. 4000>0.  1000<9000 && 1000>9000
            secondLargest=arr[j];
//           F F
        }
    }

    printf("%d",secondLargest);
    return 0;
}