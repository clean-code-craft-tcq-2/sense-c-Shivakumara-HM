#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    struct Stats s;
    int i=0; 
    int j=0; 
    int k=0; 
    float sum; 
    float smallest=numberset[0]; 
    float biggest=numberset[0];
   
    //code to calculate average of numberset
    for (i=0;i<setlength;i++)
    {
        sum = sum+numberset[i];
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
        if(numberset[k]>biggest)
        biggest = numberset[k];
    }
    s.max=biggest; 
    
    return s;
}
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
