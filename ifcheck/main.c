#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float hourlyrate = 12.00;
    float hours;
    float overtime = 40.00;
    float hoursafterforty = 0.0;
    float overtimeratechange = 1.5;

    float pay = 0.0;
    float taxes = 0.0;


    printf("Enter Number of Hours worked\n");
    scanf("%f", &hours);


    if (hours > overtime)
        {
            hoursafterforty = hours - overtime;
            pay = overtime * hourlyrate;
            pay = pay + (hoursafterforty*hourlyrate*overtimeratechange);

        }
    else{
            pay = hours * hourlyrate;
        }

    if(pay > 300)
    {
        if(pay > 450)
        {
            taxes = (pay-450)*.25;
            taxes = taxes + (150*.20);
            taxes = taxes + (300*.15);
        }
        else{
            taxes = (pay-300)*.2;
            taxes = taxes + (300*.15);
        }

    }
    else{
        taxes = pay*.15;
    }
    printf("pay = %.2f\n", pay);
    printf("taxes = %.2f\n", taxes);
    return 0;
}
