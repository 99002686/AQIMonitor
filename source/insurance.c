#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void age(struct points *ag)
{
    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    current_date :
    printf("\n Please Enter Today's date in DD MM YYYY format : ");
      scanf("%d %d %d", &ag->curDate.ddate, &ag->curDate.dmonth, &ag->curDate.dyear);

    if(ag->curDate.ddate > month[(ag->curDate.dmonth) - 1])
    {
        printf("\n Please enter valid date : ");
        goto current_date;
    }
    if(ag->curDate.ddate > 31 || ag->curDate.ddate < 1 || ag->curDate.dmonth < 1 || ag->curDate.dmonth > 12|| ag->curDate.dyear > 9999|| ag->curDate.dyear < 2019)
    {
        printf("\n Please enter valid date : ");
        goto current_date;
    }

    date_of_birth :
    ag->dob.ddate = ag->applicant.cdate;
    ag->dob.dmonth = ag->applicant.cmonth;
    ag->dob.dyear = ag->applicant.cyear;

 if(ag->dob.ddate > month[ag->dob.dmonth - 1])
   {
     printf("\n Please enter valid date : ");
     goto date_of_birth;
   }

 if(ag->dob.ddate > 31 || ag->dob.dmonth > 12||ag->dob.dyear >= ag->curDate.dyear)
  {
      goto date_of_birth ;
  }

    else
    {    if (ag->dob.ddate > ag->curDate.ddate)
        {
            ag->curDate.ddate += month[ag->dob.dmonth - 1];
            ag->curDate.dmonth -= 1;
        }
        if (ag->dob.dmonth > ag->curDate.dmonth)
        {
            ag->curDate.ddate -= 1;
            ag->curDate.dmonth += 12;
        }
        printf("\n Your age as of now is : %d years %d months %d days. ",ag->curDate.dyear - ag->dob.dyear, ag->curDate.dmonth - ag->dob.dmonth, ag->curDate.ddate - ag->dob.ddate);
        ag->age = ag->curDate.dyear - ag->dob.dyear;
    }
}

    


