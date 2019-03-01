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
	char num[100];
	char name[100];
	char sex;
	int age;
	float score;
	char add[100];
	struct student *next;
};
int n;
struct student*input(void)
{
	struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf ("%s %s %c %d %f %s",&p1->num,&p1->name,&p1->sex,&p1->age,&p1->score,&p1->add);
	p1->next=NULL;
	head=NULL;
	while (strcmp("end",p1->num)!=0)
	{
		
		n++;
		p2=(struct student*)malloc(LEN);
		p2->next=p1;
		p1=p2;
		scanf ("%s",&p1->num);
		if (strcmp("end",p1->num)==0) break;
		else scanf ("%s %c %d %f %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->add);
	}
	head=p1->next;
	return (head);
}
void main ()
{
	struct student *p;
	p=input();
	while (p!=NULL)
	{
		printf ("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
		p=p->next;
	}
}




