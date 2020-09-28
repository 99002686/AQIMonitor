#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void smoke (struct points *sm)
{
    char sheet,sheet11[3], buffer;
    int flag=0;
    printf("\n Do you smoke(y/n) ? ");
    scanf("%c%c",&buffer, &sheet11[0]);
    
    if(sheet11[0] == 'y' || sheet11[0] == 'Y')
    {
        flag=1;
        printf("\n What type of cigarette do you smoke?(Enter Your Choice.)\n a) Mild. \n b)Strong. \n c) Normal.\n Ans--");
        scanf("%c",&sheet11[1]);
        sheet=sheet11[1];
        if(sheet11[1] == 'a')
        {
            sm->score -= 0.1;
            printf("\n How many cigarettes do you smoke?(Enter Your Choice.)\n a) 1-3.\n b) One pack.\n c) More than one pack.\n\t Ans--");
            scanf(" %c",&sheet11[2]);
            if(sheet11[2] == 'a')
                sm->score -= 0.2;
            else if(sheet11[2] == 'b')
                sm->score -= 0.4;
            else
                sm->score -= 0.6;
        }
        else if(sheet11[1] == 'b')
        {
            sm->score -= 0.2;
            printf("\n How many cigarettes do you smoke per day ?(Enter Your Choice)\n a) 1-3.\n b) One pack.\n c) More than one pack.\n\t Ans--");
            scanf(" %c",&sheet11[2]);
            if(sheet11[2] == 'a')
            sm->score -= 0.2;
            else if(sheet11[2] == 'b')
                sm->score -= 0.4;
            else if(sheet11[2] == 'c')
                sm->score -= 0.6;
        }
        else if(sheet11[1] == 'c')
        {
            sm->score -= 0.4;
            printf("\n How many cigarettes do you smoke per day ?(Enter Your Choice)\n a) 1-3.\n b) One pack.\n c) More than one pack.\n\t Ans--");
            scanf(" %c",&sheet11[2]);

            if(sheet11[2] == 'a')
            sm->score -= 0.2;
            else if(sheet11[2] == 'b')
                sm->score -= 0.4;
            else if(sheet11[2] == 'c')
                sm->score -= 0.6;
        }
    }
    else
    {
        strcpy(sm->smoke,"NULL");
    }

    if(flag==1)
    {
        switch(sheet)
        {
        case 'a':
            strcpy(sm->smoke,"MILD");
            break;
        case 'b':
            strcpy(sm->smoke,"STRONG");
            break;
        case 'c':
            strcpy(sm->smoke,"REGULARLY");
            break;
        }
    }
}
