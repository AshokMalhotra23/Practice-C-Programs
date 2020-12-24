#include <stdio.h>
#include <stdlib.h>

int main()
{   int length;
    printf("Enter the length of stick:");
    scanf("%i", &length);
    if((length%2)!=0)
        printf("\nstick can't be divided in the required way,length should be a multiple of 2");
    else if((length%4)==0)
        printf("number of ways are/is %i",(length-4)/4);
    else
        printf("number of ways are/is %i",(length-2)/4);

    return 0;
}
