#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

int month (struct points* mo, char *insur, int age, int in)
{
    if(!in)
    {
        strcpy(mo->insurance, insur);
        mo->age = age;
    }
    else
    {
        if(strcmp(mo->insurance, "SUNRISE"))
        {
            if(mo->age >= 20 && mo->age <= 45)
            {
                mo->monthpay = 3500;
            }
            else
            {
                mo->monthpay = 4500;
            }
        }
        else if(strcmp(mo->insurance, "LIFE ELITE SECURE"))
        {
            if(mo->age >= 18 > mo->age <= 60)
            {
                mo->monthpay = 3000;
            }
            else
            {
                mo->monthpay = 4000;
            }
        }
        else if(strcmp(mo->insurance,"PAAKA LIFE eSHIELD"))
        {
            if(mo->age >= 25 && mo->age <= 50)
            {
                mo->monthpay = 3300;
            }
            else
            {
                mo->monthpay = 4300;
            }
        }
        else if(strcmp(mo->insurance,"BHARMA PLAN"))
        {
            if(mo->age >= 14 && mo->age <= 30)
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
    if(!in)
        return mo->monthpay;
}
