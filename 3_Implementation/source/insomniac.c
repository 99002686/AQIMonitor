#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void insomniac(struct points* in)
{
    char sheet7;
    printf("\n How many hours do you sleep a day?\n a) More than 10 hours.\n b) Proper sleep.\n c) Less than five hours.\n d)Very less.\n\t Ans--");
    scanf(" %c",&sheet7);
    switch(sheet7)
    {
        case 'a':
        {
            strcpy(in->insomniac,">Than 10 hours");
            in->score -= 0.1;
            break;
        }
        case 'b':
        {
            strcpy(in->insomniac,"Proper sleep");;
            in->score -= 0.0;
            break;
        }
        case 'c':
        {
            strcpy(in->insomniac,"Less than 5 hours");
            in->score -= 0.5;
            break;
        }
        case 'd':
        {
            strcpy(in->insomniac,"Insomniac");
            in->score -= 1.0;
            break;
        }
    }
}