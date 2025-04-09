#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the number of a=");
    scanf("%d",&a);
    printf("enter the number of b=");
    scanf("%d",&b);
     printf("enter the number of c=");
    scanf("%d",&c);
   
    int smaller=(a>b)?(a<c)?a:c:(b<c)?b:c;
     printf("the number is %d\n ",smaller);
    return 0;

}