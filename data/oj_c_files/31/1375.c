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
	{ char num[20];
	char name[20];
	char sex;
	int age;
	double score;
	char add[100];
	struct student*next;
	}*head,*p1;
void main()
{
	int n=0;
	p1=(struct student*)malloc(LEN);
	scanf("%s",p1->num);
	while(p1->num[0]!='e')
	{
scanf("%s %c%d%lf%s",p1->name,&p1->sex,&p1->age,&p1->score,p1->add);
		n++;
		if(n==1)p1->next=NULL;
		else p1->next=head;
head=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->num);
	}
	p1=head;
	do
	{
		printf("%s %s %c %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
while(p1!=NULL);
}