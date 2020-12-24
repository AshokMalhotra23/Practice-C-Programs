#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fac=1,n;
    printf("enter the number:");
    scanf("%i",&n);
    for(int i=1; i<=n;fac*=i++);

    printf("%i",fac);
    return 0;
}
