#include<stdio.h>
void Area(int a){
    float cal=3.14*a*a;
    printf("%.2f ",cal);




}

int main(){
    int n;
    scanf("%d",&n);
    Area(n);

}