#include<stdio.h>
int main(){
    int number;
    printf("Enter the 3digit number:");
    scanf("%d",&number);
    if(number>99 && number<=999)
    {
       int result= (number/100)+((number/10)%10)+(number%10);
       printf("The sum of digit for the give number %d",result);
    }
    else {
        printf("The invalid number:");
    }
    return 0;
}