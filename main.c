#include <stdio.h>
#include "parking.c"

int main()
{
    char testHour[6] = "01:30";
    char *testHourPtr;
    testHourPtr = testHour;

    int startMinutes = 0;
    int *startMinutesPtr;
    startMinutesPtr = &startMinutes;

    int endMinutes = 189;
    int *endMinutesPtr;
    endMinutesPtr = &endMinutes;

   


   printf("%d\n", formatTime(testHourPtr));
   printf("%d", spentMinutes(startMinutesPtr, endMinutesPtr));
    
}