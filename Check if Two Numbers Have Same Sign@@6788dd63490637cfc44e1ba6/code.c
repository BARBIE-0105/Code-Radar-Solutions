#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
        if ((num1 * num2) >= 0) {
            printf("Same Sign\n");
        }
        else{
            printf("Different Sign\n");
        }
        return 0;

}