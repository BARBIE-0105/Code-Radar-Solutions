#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("greater integer:%d\n",a);
    }
    else if(b>a){
        printf("greater integer:%d",b);
    }
    return 0;
}