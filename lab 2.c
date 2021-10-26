#include <stdio.h>
#include <math.h>
void main()
{
    float x = 5.168;
    float y = 3.022;
    float z = 1.569;
    float result =
    pow(x+1,2)+2*(y+z)/((x+y)+pow(z,2))+13*log(x*y+z)/log(5);
    printf("%f",result);
    
}