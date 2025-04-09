#include<stdio.h>
int main(){
    int age;
    printf("enter age=");
    scanf("%d",&age);
    if(age>18){
        printf("adult\n");
        printf("can drive and vote");
    }
    else {
        printf("Not adult");
    }
    printf("thanks for respond\n");
    return 0;
}