#include <stdio.h>
#include <time.h>
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

    time_t seconds;
    struct tm *timeStruct;
    seconds = time(NULL);
    timeStruct = localtime(&seconds);

    int hour = timeStruct->tm_hour;
    int minutes = timeStruct->tm_min;

    printf("\nAll minutes of a current day: %d\n", setMinutes(&hour, &minutes));
   
    
}