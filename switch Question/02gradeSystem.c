#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks<0 || marks>=100){
        printf("Invalid Input");
    }
    int m=marks/10;
    switch (m)
    {
    case 10: case 9:
        printf("A");
        break;
    case 8: case 7:
    if(75<=marks && marks<=89){
        printf("B");
        }
    else{
        printf("C");
    }
        break;
    case 6:
    if(60<=marks && marks<=74){
    printf("C");
    }
    else{
        printf("C");
    }
        break;
    case 5:
        printf("D");
        break;
    case 4:
        printf("E");
        break;
    case 3:
    if(35<=marks && marks<=39){
        printf("Supplementary");
        }
    else{
        printf("F");
    }
        break;
    default:
        printf("F");
        break;
    }
    return 0;
    }

