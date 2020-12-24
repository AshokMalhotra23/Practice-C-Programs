#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,primeindex=2;
    _Bool isprime;
    int primes[50]={2,3};
    for(i=5;i<=100;i+=2)


      {

       for(int j=2;j<i;j+=1)
          {
           isprime=1;
           if(i%j==0)
               {isprime = 0;break;}

        }


      if (isprime==1)
          {

           primes[primeindex]=i;
           primeindex+=1;



      }



       }

       for(int a=0;a<50;++a)
       {
           printf("%i\t",primes[a]);
       }


    return 0;
}
