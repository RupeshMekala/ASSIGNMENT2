#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num>100&&num<200)
    {
        (num%2==1)? printf("Number is odd"):printf("Number is not odd");
    }
    else
        {printf("Not in the range.");}
    return 0;
    


}