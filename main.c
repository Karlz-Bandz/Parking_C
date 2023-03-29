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
    printf("%d", setMinutes(startMinutesPtr, endMinutesPtr));

    time_t seconds;
    struct tm *timeStruct;
    seconds = time(NULL);
    timeStruct = localtime(&seconds);

    int hour = timeStruct->tm_hour;
    int minutes = timeStruct->tm_min;

    int startMin = setMinutes(&hour, &minutes);

    int hour2 = 22;
    int minutes2 = 45;

    int endMin = setMinutes(&hour2, &minutes2);

    int spentHoursX = spentHours(&startMin, &endMin);

    printf("\n%d", spentHoursX);
   
    
}