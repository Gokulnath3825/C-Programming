#include<stdio.h>
int main(){
    char str1[50],str2[50];
    scanf("%s %s",str1,str2);
    char *a=str1;
    char *b=str2;
    int i=0;
    while(*a!='\0'){
        a++;
        i++;
    }
    while(*b!='\0'){
        *a=*b;
        b++;
        a++;
        i++;
    }
    *(a+i)='\0';
    printf("%s\n",str1);
    

}