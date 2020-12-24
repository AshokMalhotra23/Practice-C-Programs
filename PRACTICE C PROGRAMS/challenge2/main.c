#include <stdio.h>
#include <stdlib.h>

int main(int argc,int argv[])
{
    int height=argv[1],width=argv[2];
    int perimeter,area;
    perimeter = 2*(width+height);
    area = width * height;
    printf("The height,width and area of rectangle is %i,%i,%i\n" , height,width,area);
    printf("The height,width and perimeter of rectangle is %i,%i,%i\n" , height ,width,perimeter);

    return 0;
}
