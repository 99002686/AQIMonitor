#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "insuranceVariables.h"
#include "insurance.h"
#define default_char 'z'

int buffer_rx;
char s[20];
int main()
{
    int number, id = 1000, iter=0;
    int t_accident, t_alcohol, rt_accident, rt_alcohol;
    char check, buffer;
    struct points *personson;
    printf("############### WELCOME TO GANPATH INSURANCE CONSULTATION !!! ####################");
    printf(" \n MOTTO : POLICIES AT YOUR DOOR STEPS SINCE 19 \n");
    printf("\n VARIOUS POLICIES : \n");
    printf("\n 1.POLICY NAME : 'PAAKA LIFE E-SHIELD' ");
    printf("\n a.Entry age : 25 to 50 years ");
    printf("\n b.Policy term : 5 years to 30 years ");
    printf("\n c.Sum assured : Min - 20L  Max - no limit \n");
    printf("\n 2.POLICY NAME : 'BHARAMA PLAN'");
    printf("\n a.Entry age : 12 to 30 years ");
    printf("\n b.Policy term : 12 to 20 years ");
    printf("\n c.Sum assured : Min - 15L  Max - no limit\n");
    printf("\n 3.POLICY NAME : 'LIFE ELITE SECURE'");
    printf("\n a.Entry age : 18 to 60 years");
    printf("\n b.Policy term : 25 to 30 years ");
    printf("\n c.Sum assured : 25L Max - no limit \n");
    printf("\n 4.POLICY NAME : 'AVATAR I-LIFE'");
    printf("\n a.Entry age : 18 to 60 years");
    printf("\n b.Policy term : 10-35 years");
    printf("\n c.Sum assured : Min-15L Max-50L\n");
    printf("\n 5.POLICY NAME : 'SUNRISE'");
    printf("\n a.Entry age : 20 to 45 years");
    printf("\n b.Policy term : 5-40 years");
    printf("\n c.Sum assured : Min-30L Max-NO LIMIT\n");

    printf("Enter the number of Applicant:");
    scanf("%d", &number);
    for(iter=0; iter<number; iter++)
    {
        struct points *person = malloc (sizeof(struct points) * number);
        printf("\n NO : %d ID registration: ",iter+1);
        id += (iter+1);
        printf("\n YOUR ID IS : %d\n",id);
        person[iter].applicant.id = id;

        printf("\n Your good name : ");
        scanf("%s%c", person[iter].applicant.name, &buffer);
        printf("\n Please enter your gender \n a:MALE \n b:FEMALE \n\t ANS -");
        scanf(" %c", &check);
        if(check =='a'|| check =='A')
        {
          strcpy(person[iter].gender,"MALE");
          person[iter].score-=0.1;
        }
        else
        {
            strcpy(person[iter].gender,"FEMALE");
        }
        printf("\n Mobile number : ");
        scanf("%s%c", person[iter].applicant.phoneNumber, &buffer);

        printf("\n Email ID : ");
        scanf("%s%c", person[iter].applicant.email, &buffer);

        printf("\n Enter your Date of birth(DD MM YYYY format) : ");
        scanf("%d %d %d", &person[iter].applicant.cdate, &person[iter].applicant.cmonth, &person[iter].applicant.cyear);
        age(&person[iter]);

        printf("\n Enter your Annual Income: ");
        scanf("%ld",&person[iter].applicant.income);
        check = '\0';
        printf("\n Are you Married(Y/N) ? ");
        scanf("%c%c",&buffer, &check);
        if(check == 'y' || check == 'Y')
        {
            strcpy(person[iter].applicant.maritialStatus,"MARRIED");
        }
        else
        {
            strcpy(person[iter].applicant.maritialStatus,"NOT-MARRIED");
        }

        printf("\n Enter your Nominee's Name(Only blood relation) : ");
        scanf("%c%s",&buffer, person[iter].applicant.nomineeName);

        printf("\n Enter your Relationship with Nominee : ");
        scanf("%s%c", person[iter].applicant.nomineeRelation, &buffer);

        printf("\n Height(in cm) : ");
        scanf(" %f",&person[iter].height);
        
        printf("\n Weight(in kg) : ");
        scanf(" %f",&person[iter].weight);

        person[iter].bmi = (person[iter].weight) / (person[iter].height/100 * person[iter].height/100);
        
        printf("\n Your BMI is %f : ",person[iter].bmi);
        if(person[iter].bmi<18.5)
        {
            printf("\n !!You are underweight !!");
            person[iter].score -= 0.2;
        }
        else if((person[iter].bmi > 18.5) && (person[iter].bmi < 24.9))
        {
            printf("\n !* You are personfe    ct *!");
        }
        else if((person[iter].bmi) < 29.9)
        {
            printf("\n !# Sorry you are obese :(  #!");
            person[iter].score -= 0.1;
        }
        else if((person[iter].bmi) < 39.9)
        {
         printf("\n !$ Obese  $! ");
         person[iter].score-=0.2;
        }
        else if ((person[iter].bmi) > 40)
        {
            printf("\n\t Morbidly obese !");
            person[iter].score -= 0.4;
        }
        
        smoke(&person[iter]);
        buffer_rx = alcohol(&person[iter], default_char, 1);
        drugs(&person[iter]);
        buffer_rx = exercise(&person[iter], default_char, 1);
        buffer_rx = diet(&person[iter], default_char, 1);
        stress(&person[iter]);
        insomniac(&person[iter]);
        healthIssue(&person[iter]);
        buffer_rx = accident(&person[iter], default_char, 1);
        buffer_rx = policy(&person[iter], 0, 1);
        buffer_rx = month(&person[iter], "arogya", 0, 1);

        printf("\n\n\t\t\t ! !PLEASE CHECK YOUR DETAILS ! !\n");
        printf("\n 1.ID = %d.\n 2.NAME = %s.\n 3. GENDER(M/F) = %s.\n 4.MOBILE NUMBER = %s.\n 5.EMAIL-ID = %s.\n 6.DOB = %d/%d/%d.",person[iter].applicant.id, person[iter].applicant.name, person[iter].gender,person[iter].applicant.phoneNumber, person[iter].applicant.email,person[iter].applicant.cdate,person[iter].applicant.cmonth,person[iter].applicant.cyear);
        printf("\n 7.AGE = %d.\n 8.ANNUAL INCOME = %ld.\n 9.MARITIAL STATUS = %s.\n 10.HEIGHT = %0.2f.\n 11.WEIGHT = %0.2f.\n 12.SMOKE STATUS = %s.\n 13.ALCOHOLIC CONSUMPTION=%s.",person[iter].age,person[iter].applicant.income,person[iter].applicant.maritialStatus,person[iter].height,person[iter].weight,person[iter].smoke,person[iter].alcohol);
        printf("\n 14.DRUG BEHAVIOUR(Y/N) = %c.\n 15.EXERCISE = %s.\n 16.DIET = %s.\n 17.STRESS STATUS = %s.\n 18.SLEEPING SCHEDULE = %s person day.",person[iter].drug,person[iter].exercise,person[iter].diet,person[iter].stress,person[iter].insomniac);
        printf("\n 19.HEALTH HISTORY = %s.\n 20.ACCIDENT STATUS = %c.\n 21.POLICY SUGGESTED = %s.",person[iter].healthIssue, person[iter].accident,person[iter].insurance);
        printf("\n 22.NOMINEE NAME=%s.\n 23.NOMINEE RELATIONSHIP=%s.\n 24.MONTHLY PAYMENT = %d.",person[iter].applicant.nomineeName,person[iter].applicant.nomineeRelation,person[iter].monthpay);
        printf("\n\t\t\t");
        check = '\0';
        printf("\n\t Do you Want To Register(Y/N) ? ");
        scanf("%c%c", &buffer, &check);
        if(check == 'N' || check == 'n')
            break;
    }
   return 0;
}
