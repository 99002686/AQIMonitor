#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void accident(struct points* ac)
{
    char sheet10;
    printf("\n Have you faced any serious accidents/Trauma(y/n)?");
    scanf(" %c",&ac->accident);
    if(ac->accident == 'y' || ac->accident == 'Y')
    {
        printf("\n How many ?(Enter Your Choice.)\n a) More than 3.\n b) Less than 3.\n c) Never.\n Ans--");
        scanf(" %c",&sheet10);
       if(sheet10 == 'a')
        {
            ac->accident -= 0.4;
        }
        else
        {
            ac->accident -= 0.3;
        }
    }
}