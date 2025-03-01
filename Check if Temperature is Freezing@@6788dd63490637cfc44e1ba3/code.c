#include<stdio.h>
int main()
{
    float temperature;
        if (temperature <= 0) {
            printf("Freezing\n");
        }
        else if(temperature > 0){
            printf("Not Freezing\n");
        }
        else{
            printf("Above Freezing\n");
        }
        return 0;

}