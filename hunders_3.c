#include<stdio.h>
int main()
{
    int num;
    printf("enter the 3digit number:");
    scanf("%d",&num);
    if (num>99&&num<=999){
        int hunders=num/100;
        printf("The given number hunders is :%d",hunders);
    }
    else{
        printf("The invailded input");
    }  
    return 0;
}    