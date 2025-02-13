#include<stdio.h>
int main(){
    int number;
    printf("Enter the 4 digit number:");
    scanf("%d",&number);
    if(number>999&&number<=9999)
    {
        int ones=number%10;
        int tens=(number/10)%10;
        int hunders=(number/100)%10;
        int thousand=number/1000;
        int rev=(hunders*1000)+(thousand*100)+(tens*10)+ones;
        printf("The revers of given number:%d",rev);
    }
    else {
        printf("invalied input");
    }
    return 0;
}