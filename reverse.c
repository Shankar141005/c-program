#include<stdio.h>
int main()
{
    int number;
    printf("Enter the 2digit number:");
    scanf("%d",& number);
    if(number>9&&number<=99)
    {
      int ones=number%10;
      int tens=(number/10)%10;
      int rev=(ones*10)+tens;
      printf("The reverse of given number:%d",rev);
    }
    else{
        printf("invalid input ");
    }
    return 0;
}