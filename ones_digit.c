#include<stdio.h>
int main()
{
    int num;
    printf("Enter the two digit:");
    scanf("%d",&num);
    int result =num%10;
    printf("%d The ones digit",result);
    return 0;
}