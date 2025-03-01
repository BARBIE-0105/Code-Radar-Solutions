#include<stdio.h>
int main()
{
    char operator;
    double num1,num2,result;
    scanf("%c",&operator);
    scanf("%lf%lf",&num1,&num2);
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n");
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n");
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n");
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n");
        }
        } 
        else{
            printf("Invalid")
        }
        return 0;
}