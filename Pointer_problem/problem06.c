#include<stdio.h>
void max(int n,int arr[]){
    int *start=arr;
    int *end=arr+n-1;
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for(int *p=arr;p<arr+n;p++) {
        printf("%d ",*p);
    }
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