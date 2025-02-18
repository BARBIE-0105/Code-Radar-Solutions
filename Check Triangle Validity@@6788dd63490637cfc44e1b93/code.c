#include<stdio.h>
int main()
{
  long int a,b,c;
 scanf("%ld%ld%ld",&a,&b,&c);
 if ( a>0 && b>0 && c>0 && a + b + c == 180){
    printf("Valid\n");
 }
 else{
    printf("Invalid\n");
 }
 return 0;
}