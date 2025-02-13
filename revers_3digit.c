#include<stdio.h>
int main()
{
    int number;
    printf("Enter the 3digit number:");
    scanf("%d",&number);
    if(number>99&&number<=999)
    {
        int ones=number%10;
        int tens=(number/10)%10;
        int hunders=(number/100)%10;
        int rev=(ones*100)+(tens*10)+hunders;
        printf("The reverse of given number %d",rev);
    }
    else
    {
        printf("invalid input");

    }
    return 0;
}
    