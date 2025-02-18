#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("maximum number\n",a);
    }
     else if (b>a &&b>c)
     {
        printf("maximum number\n",b);
     }
     else{
        printf("maximum number\n",c);
     }
     return 0;
}