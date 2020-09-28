#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

int accident(struct points* ac, char a, int in)
{
    char sheet10;
    ac->accident = a;
    if(in)
    {
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
    if(ac->accident == 'Y' || ac->accident == 'y')
        return 1;
    return 0;
}