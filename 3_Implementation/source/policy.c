#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void* policy(struct points* po, int score, int in)
{
    if(!in)
        po->score = score;
    else
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
            strcpy(po->insurance,"PAAKA LIFE eSHIELD");
        }
        else if((po->score > 6)&&(po->score <= 9))
        {
            strcpy(po->insurance,"BHARMA PLAN");
        }
        else
        {
            strcpy(po->insurance,"AVATAR I-LIFE");
        }
    }
    if(!in)
        return po->insurance;
    return 0;
}