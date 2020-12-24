#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primes[50] = {2,3};
    int i,j;
    int primeindex =2;
    _Bool isprime;
    for(int i=5;i<=100;i+=2)
    {
        isprime = 1;
        for(int j=3; j<=i;j+=2)
        {
            if(i%j==0)
            {
                isprime = 0;

            }
        if(isprime==1)
        {
            primes[primeindex]=i;
            primeindex+=1;
        }
        }


    }
    for (int a=0;a<primeindex;++a)
        printf("%i",primes[a]);
    return 0;
}
