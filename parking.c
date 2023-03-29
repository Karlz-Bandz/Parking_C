#include "parking.h"

int claculateTheCost(char *startTime, char *endTime)
{
 
 int startMinutes;
 int startMinutesTemp = 0;
 int endMinutes;
 int tempArr[2];

 int *startMinutesPtr;
 int *startMinutesTempPtr;
 int *endMinutesPtr;
 int *tempArrPtr;
 
 startMinutesPtr = &startMinutes;
 startMinutesTempPtr = &startMinutesTemp;
 endMinutesPtr = &endMinutes;
 tempArrPtr = tempArr;

 tempArrPtr[0] = (int)startTime[0] - '0';
 tempArrPtr[1] = (int)startTime[1] - '0';

 for(int i = 0; i < 2; i++)
 {
    *startMinutesTempPtr = *startMinutesTempPtr * 10 + tempArrPtr[i];
 }

 *startMinutesTempPtr = *startMinutesTempPtr * 60;
 *startMinutesPtr = *startMinutesTempPtr;
 *startMinutesTempPtr = 0;

 tempArrPtr[0] = 0;
 tempArrPtr[1] = 0;
 tempArrPtr[0] = (int)startTime[3] - '0';
 tempArrPtr[1] = (int)startTime[4] - '0';

 for(int i = 0; i < 2; i++)
 {
    *startMinutesTempPtr = *startMinutesTempPtr * 10 + tempArrPtr[i];
 }

 *startMinutesPtr += *startMinutesTempPtr;
 *startMinutesTempPtr = 0;

 return *startMinutesPtr;   
}