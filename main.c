#include <stdio.h>
#include "parking.c"

int main()
{
    char startHour[6] = "01:30";
    char *startHourPtr;
    startHourPtr = startHour;

    char endHour[6] = "15:20";
    char *endHourPtr;
    endHourPtr = endHour;

    //printf("%d", startHourPtr[1] - '0');


   printf("%d", claculateTheCost(startHourPtr, endHourPtr));
    
}