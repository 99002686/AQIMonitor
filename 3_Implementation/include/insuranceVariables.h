#ifndef __INSURANCEVARIABLES_H__
#define __INSURANCEVARIABLES_H__

struct customer
{
    char name[30], phoneNumber[30], email[50], maritialStatus[10], nomineeName[20], nomineeRelation[20];
    int cdate, cmonth, cyear, id;
    long int income;
};

struct date
{
    int ddate, dmonth, dyear;
};

struct points
{   struct customer applicant;
    struct date dob, curDate;
    int age, monthpay;
    float height, weight, bmi, bp, score;
    char gender[20], smoke[10], alcohol[9], drug;
    char exercise[20], diet[10], stress[10], insomniac[20], healthIssue[20], accident,insurance[30];
};

#endif /*#ifndef __insuranceVariables_H__ */