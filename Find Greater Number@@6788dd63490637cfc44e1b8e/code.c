#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("greater integer",a);
    }
    else if(b>a){
        printf("greater integer",b);
    }
    return 0;
}