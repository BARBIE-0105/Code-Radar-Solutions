#include<stdio.h>
int meain()
{
    int age, citizenship;
    scanf("%d%d",&age,&citizenship);
    if (age >= 18 && citizenship == 1){
        printf("Eligible\n");
    }
    else{
        printf("Not Eligible\n");
    }
    return 0;

}