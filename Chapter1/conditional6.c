#include<stdio.h>
int main(){
    int day;
    printf("enter day=");
    scanf("%d",&day);

    switch (day)
    {
    case 'm': printf("monday\n");
        break;
     case 'T' : printf("tuesday\n");
        break;
     case 'w' : printf("wednesday\n");
        break;
     case 't':printf("thursday\n");
        break;
     case 'f':printf("friday\n");
        break;
     case 'S':printf("saturday\n");
        break;
     case 's':printf("sunday\n");
        break;
    
    default:printf("wrong input\n");
        break;
    }
    return 0;
    }