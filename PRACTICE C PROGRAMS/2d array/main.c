#include <stdio.h>
#include <stdlib.h>

int main()
{   float yearly_rain,yearly_avg,monthly_rain,monthly_avg,p;
    float rainfall[5][12] = {{7.8,3.2,2.6,6.5,5.3,9.6,5.6,3.1,4.5,7.5,2.3,2.5},
                             {5.3,6.3,2.5,6.5,4.5,6.3,1.2,5.4,4.5,6.3,6.9,9.6},
                             {4.5,4.5,4.5,4.5,4.5,6.3,9.8,9.7,2.6,9.3,6.5,4.5},
                             {4.2,4.2,4.2,4.2,4.6,4.3,4.5,5.3,9.6,4.5,6.3,6.9},
                             {8.3,6.3,9.3,4.5,9.3,1.2,8.5,9.6,7.5,6.2,1.6,1.9}} ;
    printf("YEAR  RAINFALL(INCHES)\n");

    for (int i=0 ; i<=4 ; ++i)
    {   printf("201%i\t   ",i);
        for(int j=0; j<=11;++j)
        {
            yearly_rain+=rainfall[i][j];
        }


        yearly_avg=(yearly_rain)/12;
        printf("%.1f\n" , yearly_rain);
        yearly_rain=0;
        p+=yearly_rain;
   }

    printf("The yearly average is %.1f\n\n",p/5);
    printf("Monthly Averages:\n\n");
    printf("JAN FEB MARCH APR MAY JUNE JULY AUG SEPT OCT NOV DEC\n");
    for (int a=0;a<12;++a)
    {
        for(int b=0;b<5;++b)
        {
            monthly_rain+=rainfall[b][a];

        }
            monthly_avg=monthly_rain/5;
            printf("%.1f ",monthly_avg);
            monthly_rain=0;

    }




    return 0;
}
