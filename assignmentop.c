#include<stdio.h>
int main()
{
    int a,b;
    a=5;
    b=4;
    a+=b;
    
    printf("%d",a);
    a*=b;  //a=a*b
     printf("%d",a);
     a-=b;   //a=a-b
      printf("%d",a);
      return 0;
}