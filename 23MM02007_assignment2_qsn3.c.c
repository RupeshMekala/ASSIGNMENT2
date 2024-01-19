#include <stdio.h>
int main()
{
    int tdays;
    printf("Enter the number of days:");
    scanf("%d",&tdays);
    int daysinyear=365;
    int daysinmonth=30;
    int daysinweek=7;
    tdays/daysinyear;
    printf("Years=%d\n",tdays/daysinyear);
    int remainingdays_1=tdays%daysinyear;
    printf("Months=%d\n",remainingdays_1/daysinmonth);
    int remainingdays_2=remainingdays_1%daysinmonth;
    printf("Weeks=%d\n",remainingdays_2/daysinweek);
    int remainingdays_3=remainingdays_2%daysinweek;
    printf("Days=%d\n",remainingdays_3);
    return 0;




    



}