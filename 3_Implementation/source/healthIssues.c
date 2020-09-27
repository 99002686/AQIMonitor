#include "insuranceVariables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  "insurance.h"

void healthIssue(struct points* he)
{
    char sheet8,sheet9;
    printf("\n Have you been through any major disease?(Enter Your Choice.)\n a) Cardiac Arrest.\n b) Appendix.\n c) Organ Transplantation.\n d) Kidney/Liver Failure.\n e) Any other.\n f) Never been affected.\n\t Ans--");
    scanf(" %c",&sheet8);
    switch(sheet8)
    {
        case 'a':
        {
            printf("\n Do you still undergo medication for cardiac arrest?(Enter Your Choice.)\n a) Yes.\n b) No.\n\t Ans--");
            scanf(" %c",&sheet9);
            strcpy(he->healthIssue,"Cardiac Arrest");
            if(sheet9=='y' || sheet9=='Y')
                he->score-=0.5;
            else
                he->score-=0.3;
            break;
        }
        case 'b':
        {
            printf("\n Do you still undergo medication for appendix?(Enter Your Choice.) \n a) Yes.\n b) No.\n Ans--");
            scanf(" %c",&sheet9);
            strcpy(he->healthIssue,"Appendix");
            if(sheet9=='y'||sheet9=='Y')
                he->score-=0.5;
            else
                he->score-=0.3;
            break;
        }
        case 'c':
        {

            printf("\n Do you still undergo medication for Organ Transplantation?(Enter Your Choice.)\n a) Yes.\n b) No.\n Ans--");
            scanf(" %c",&sheet9);
            strcpy(he->healthIssue,"Organ Transplantation");
            if(sheet9=='y'||sheet9=='Y')
                he->score-=0.5;
            else
                he->score-=0.3;
            break;
        }
        case 'd':
        {
            printf("\n Do you still undergo medication for Kidney/liver failure?(Enter Your Choice.)\n a)Yes.\n b) No.\n Ans--");
            scanf(" %c",&sheet9);
            strcpy(he->healthIssue,"Kidney/Liver failure");
            if(sheet9=='y'||sheet9=='Y')
                he->score-=0.5;
            else
                he->score-=0.3;
            break;
        }
        case 'e':
        {
                printf("\n Do you still undergo medication for other illness?(Enter Your Choice.)\n a) Yes.\n b) No.\n Ans--");
            scanf(" %c",&sheet9);
            strcpy(he->healthIssue,"Other illness");
            if(sheet9=='y'||sheet9=='Y')
                he->score-=0.5;
            else
                he->score-=0.3;
            break;
        }
        default:
            strcpy(he->healthIssue,"NULL");
    }
}