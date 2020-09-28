#ifndef __INSURANCE_H__
#define __INSURANCE_H__

void smoke (struct points* sm);
void age(struct points* ag);
int alcohol(struct points* al, char, int);
void drugs(struct points* dr);
void* exercise(struct points* ex, char, int);
void* diet(struct points* di, char, int);
void stress(struct points* st);
void insomniac(struct points* in);
void healthIssue(struct points* he);
int accident(struct points* ac, char, int);
void* policy(struct points* po, int, int);
int month (struct points* mo, char*, int, int);
#endif /*#ifndef __ISURANCE_H__*/
