#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void* diet(struct points* di, char a, int in)
{
    char sheet5;
    sheet5 = a;
    printf("%c", sheet5);
    if(in)
    {
        printf("\n What kind of diet do you follow?(Enter Your Choice.)\n a) Healthy. \n b) Average. \n c) Fast food.\n\t Ans--");
        scanf(" %c",&sheet5);
    }
    switch(sheet5)
    {
        case 'a':
        {
            strcpy(di->diet,"HEALTHY");
            break;
        }
        case 'b':
        {
            strcpy(di->diet,"AVERAGE");
            break;
        }
        case'c':
        {
            strcpy(di->diet,"FAST FOOD");
            break;
        }
    }
    if(!in)
    {
        if(sheet5 == 'a' || sheet5 == 'b' || sheet5 == 'c')
            return di->diet;
    }
    return 0;
}