#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void month (struct points* mo)
{
    if(mo->insurance == "SUNRISE")
    {
        if(mo->age < 50)
        {
            mo->monthpay = 3500;
        }
        else
        {
            mo->monthpay = 4500;
        }
    }
    else if(mo->insurance == "LIFE ELITE SECURE")
    {
        if(mo->age < 50)
        {
            mo->monthpay = 3000;
        }
        else
        {
            mo->monthpay = 4000;
        }
    }
    else if(mo->insurance=="PAAKA LIFE eSHIELD")
    {
        if(mo->age < 50)
        {
            mo->monthpay = 3300;
        }
        else
        {
            mo->monthpay = 4300;
        }
    }
    else if(mo->insurance=="BHARMA PLAN")
    {
        if(mo->age<50)
        {
            mo->monthpay = 2000;
        }
        else
        {
            mo->monthpay = 3000;
        }
    }
    else
    {
        if(mo->age<50)
        {
            mo->monthpay=1800;
        }
        else
        {
            mo->monthpay=2800;
        }
    }
}
