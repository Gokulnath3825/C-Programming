#include<stdio.h>
int main(){
    int salary,absent;
    scanf("%d",&salary);
    scanf("%d",&absent);
    int deduct=100;
    int totalSalary=0;
    for(int i=1;i<=absent;i++){
        totalSalary+=deduct;
    }
    int final=salary-totalSalary;
    printf("%d",final);

}