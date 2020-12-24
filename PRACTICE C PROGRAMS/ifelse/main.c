#include <stdio.h>
#include <stdlib.h>

int main()
{
//should have used #define for the constants
    float taxes,netpay,time,grosspay;
    printf("Enter the number of hours:");
    scanf("%f",&time);
    if (time<=40)
        grosspay=time*12;
    else
        grosspay=12*40+(18*(time-40));
    if (grosspay<=300)
        taxes=(.15*grosspay);
    else if (grosspay<=450)
        taxes=(.15*300+(.2*(grosspay-300)));
    else
        taxes=((.15*300)+(.2*150)+(.25*(grosspay-450)));
    netpay = (grosspay-taxes);
    printf("The gross pay is %.2f $, taxes are %.2f $, netpay is %.2f $ ",grosspay,taxes,netpay);


    return 0;
}
