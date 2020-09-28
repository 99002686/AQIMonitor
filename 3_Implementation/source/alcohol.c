#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

int alcohol(struct points* al, char a, int in)
{
    char sheet2;
    int flag=0;
     al->alcohol[1] = a;
    if(in)
    {
        printf("\n Do you drink(y/n) : ");
        scanf(" %c",&al->alcohol[0]);
        if(al->alcohol[0] == 'y' || al->alcohol[0] == 'Y')
        {
            flag=1;
            printf("\n How about your drinking routine ?(Enter Your Choice)\n a) Rarely.\n b) Once in a month.\n c) 2-4 times a month.\n d) Daily.\n e) Constantly drinking.\n\t Ans--");
            scanf(" %c",&al->alcohol[1]);
            sheet2=al->alcohol[1];
            if(al->alcohol[1] == 'a')
            al->score -= 0.3;
            else if(al->alcohol[1] == 'b')
                al->score -= 0.5;
            else if(al->alcohol[1] == 'c')
                al->score -= 0.7;
            else if(al->alcohol[1] == 'd')
                al->score -= 1.0;
            else 
                al->score -= 2.0;
        }
        else
        {
            strcpy(al->alcohol,"NIL");
        }

        if(flag==1)
        {
            switch(sheet2)
            {
                case 'a':
                    strcpy(al->alcohol,"RARELY");
                    break;
                case 'b':
                    strcpy(al->alcohol,"ONCE MONTH");
                    break;
                case 'c':
                    strcpy(al->alcohol,"2-4 TIMES A MONTH");
                    break;
                case 'd':
                    strcpy(al->alcohol,"DAILY");
                    break;
                case 'e':
                    strcpy(al->alcohol,"CONSTANTLY");
                    break;
            }
        }
    }
    if(!in)
    {
        if(al->alcohol[1] == 'a')
            return 1;
        if(al->alcohol[1] == 'b')
            return 2;
        if(al->alcohol[1] == 'c')
            return 3;
        if(al->alcohol[1] == 'd')
            return 4;
    }
    return 0;
}
