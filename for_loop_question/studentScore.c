#include<stdio.h>
int main(){
    int n,totalMarks;
    scanf("%d",&n);
    int sum=0;
    int over=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&totalMarks);
        sum+=totalMarks;
        if(totalMarks<40){
            over++;
        }
    }
    printf("Average Score : %d\n",sum);
    if(over==0){
        printf("Failed Subjects: %d",over);
    }
    else{
        printf("Failed Subjects: %d",over);
        
    }


}