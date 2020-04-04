#include <stdio.h>
#include <stdlib.h>

int main()
{
   const float kiloinpound = 0.4536 ;
   const float meterininch = 0.0254 ;
    char name[10];
    float pound , inch , meter , kilo ,BMI;
    printf("enter your name = ");
    scanf("%s",&name);
    printf("enter your pound = ");
    scanf("%f",&pound);
    printf("enter your inch = ");
    scanf("%f",&inch);
    meter = inch/meterininch;
    kilo = pound/kiloinpound;
    BMI = kilo/meter ;
    printf("name = %s BMI %f" , name , BMI);
    return 0;
}
