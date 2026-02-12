#include<stdio.h>
void max(int n,int arr[]){
    int *p=arr;
    int max=0;
    for(int i=0;i<n;i++){
        int max1=*(p+i);
        if(max1>max ){
            max=*(p+i);
        }
    }
    printf("%d",max);

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max(n,arr);


}
