#include<stdio.h>
int main()
{
    int num;
    printf("enter the 3digit number:");
    scanf("%d",&num);
    if (num>99&&num<=999){
       int ones= num%10;
        printf("the give number ones digit is:%d",ones);
    }
    else{
        printf("The invalid input");
        return 0;
    }
}    