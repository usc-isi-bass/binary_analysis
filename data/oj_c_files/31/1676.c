#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student
{
	char num[15];
	char name[30];
	char sex[2];
	short age;
	float score;
	char address[30];
	struct student *former;
};
void main()
{
    struct student *p1,*p2;
    p1=p2=(struct student *)malloc(LEN);
    scanf("%s%s%s%d%f%s",p1->num,p1->name,p1->sex,&p1->age,&p1->score,p1->address);
    p1->former=NULL;
    while(1)
    {
    	p1=(struct student *)malloc(LEN);
    	scanf("%s",p1->num);
    	if (strcmp(p1->num,"end")==0) break;
    	scanf("%s%s%d%f%s",p1->name,p1->sex,&p1->age,&p1->score,p1->address);
    	p1->former=p2;
    	p2=p1;
    }
    while (p2!=NULL)
    {
    	printf("%s %s %s %d %g %s\n",p2->num,p2->name,p2->sex,p2->age,p2->score,p2->address);
    	p2=p2->former;
    }
}