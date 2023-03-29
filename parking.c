#include "parking.h"

int spentMinutes(int *startMinutes, int *endMinutes)
{
    return 0;
}

int formatTime(char *time)
{
 int minutes;
 int minutesTemp = 0;
 int tempArr[2];

 int *minutesPtr;
 int *minutesTempPtr;
 int *tempArrPtr;
 
 minutesPtr = &minutes;
 minutesTempPtr = &minutesTemp;
 tempArrPtr = tempArr;

 tempArrPtr[0] = (int)time[0] - '0';
 tempArrPtr[1] = (int)time[1] - '0';

 for(int i = 0; i < 2; i++)
 {
    *minutesTempPtr = *minutesTempPtr * 10 + tempArrPtr[i];
 }

 *minutesTempPtr = *minutesTempPtr * 60;
 *minutesPtr = *minutesTempPtr;
 *minutesTempPtr = 0;

 tempArrPtr[0] = 0;
 tempArrPtr[1] = 0;
 tempArrPtr[0] = (int)time[3] - '0';
 tempArrPtr[1] = (int)time[4] - '0';

 for(int i = 0; i < 2; i++)
 {
    *minutesTempPtr = *minutesTempPtr * 10 + tempArrPtr[i];
 }

 *minutesPtr += *minutesTempPtr;
 *minutesTempPtr = 0;

 return *minutesPtr;   
}