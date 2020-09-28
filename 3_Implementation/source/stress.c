#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"
void stress(struct points* st)
{
    char sheet6;
    printf("\n How often are you stressed ?(Enter Your Choice.) \n a) Rarely \n b) Often \n c) Never\n\t Ans--");
    scanf(" %c", &sheet6);
    switch(sheet6)
    {
        case 'a':
        {
            strcpy(st->stress,"Rarely");
            st -> score -= 0.5;
            break;
        }
        case 'b':
        {
            strcpy(st -> stress,"Often");
            st->score -= 0.7;
            break;
        }
        case 'c': 
        {
            strcpy(st -> stress,"Never");
            st->score -= 0;
            break;
        }
    }
}