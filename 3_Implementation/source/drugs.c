#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void drugs(struct points* dr)
{

    printf("\n Do you consume any drugs(y/n)?");
    scanf(" %c", &dr->drug);
    if(dr->drug == 'y' || dr->drug == 'Y')
    {
        dr->score-=0.5;
    }
}
