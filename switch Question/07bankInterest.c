#include<stdio.h>
int main(){
    int choice;
    scanf("%d",&choice);
    int year;
    scanf("%d",&year);
    switch (choice){
        case 1:{
            printf("Interest 4%%");
        }
        break;
        case 2:
        {
            if(year<=3){
                printf("Interest 5%%");
            }
            else{
                printf("Interest 7%%");
            }
        }
        break;
        default:
        printf("Invalid Choice");
        break;

}
}