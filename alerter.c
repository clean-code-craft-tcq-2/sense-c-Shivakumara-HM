#include "stats.h"
#include "alerter.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  int i=0, int loop_cntr=2;
  
  //call email and led alert function when max value is breached
  if(computedStats.max > maxThreshold)
  {
    for(i=0;i<loop_cntr;i++)
    {
       (*alerters[i])();
    }
  }
  else
  {
    /*do nothing*/
  }
}

void emailAlerter()
{
  //increment the email alert count
  emailAlertCallCount++;
}
void ledAlerter()
{
  //increment the led alert count
  ledAlertCallCount++;
}


  
