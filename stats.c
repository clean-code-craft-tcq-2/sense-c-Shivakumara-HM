#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    struct Stats s;
    int i=0, int j=0; int k=0, float sum, float smallest=numberset[0], float bigggest=numberset[0];
   
    //code to calculate average of numberset
    for (i=0;i<setlength;i++)
    {
        sum= sum+numberset[i];
    }
    s.average = sum/setlength;
   
    //code to calculate min of numberset
    for (j=1;j<setlength;j++)
    {
        if(smallest>numberset[j])
        smallest = numberset[j];
    }
    s.min = smallest; 
    
    //code to calculate max of numberset
    for (k=1;k<setlength;k++)
    {
        if(numberset[k]>max)
        biggest = numberset[k];
    }
    s.max=biggest; 
        
    return s.average;
    return s.min;
    return s.max;  
}
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
