#include<stdio.h>
int main()
{
    int num;
    printf("enter the 3digit number:");
    scanf("%d",&num);
    if (num>99&&num<=999)
    {
       int tenes= (num/10)%10;
       printf("The given number tenes is %d",tenes);
    }
    else{
        printf("The  invalied input ");
    }
    return 0;
   
    
}