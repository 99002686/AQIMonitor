#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void policy(struct points* po)
{
    if ((po->score >= 0) && (po->score <= 2))
    {
        strcpy(po->insurance,"SUNRISE");
    }
    else if((po->score > 2) && (po->score <= 4))
    {
        strcpy(po->insurance,"LIFE ELITE SECURE");
    }
    else if((po->score > 4) && (po->score <= 6))
    {
        strcpy(po->insurance,"PAAAKCA LIFE eSHIELD");
    }
    else if((po->score > 6)&&(po->score <= 8.5))
    {
        strcpy(po->insurance,"BHARMA PLAN");
    }
    else
    {
        strcpy(po->insurance,"AVIVA I-LIFE");
    }
}