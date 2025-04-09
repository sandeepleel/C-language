#include<stdio.h>
//given char is digit or not
int main(){
    int a;
    printf("enter number=");
    scanf("%d",&a);
    printf("%d",a>9 && a<100);
    return 0;

}
