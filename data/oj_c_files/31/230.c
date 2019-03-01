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
	char id[20];
	char name[30];
	char sex;
	int age;
	char score[30];
	char add[30];
	struct student *next;
    struct student *adv;
};
int n;
void main()
{
	struct student *p,*q,*head;
	n=0;
	p=q=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %s %s",p->id,p->name,&(*(p)).sex,&(*(p)).age,p->score,p->add);
    head=NULL;
	while(strcmp(p->id,"end")!=0)
	{
		n=n+1;
		if(n==1) {p->adv=NULL;head=p;}
		else q->next=p;
		p->adv=q;
		q=p;
	
		p=(struct student *)malloc(LEN);
		scanf("%s %s %c %d %s %s",p->id,p->name,&p->sex,&p->age,p->score,p->add);
		
	}
    q->next=NULL;
    while(q!=NULL)
	{
		if(q!=head)
		{printf("%s %s %c %d %s %s\n",q->id,q->name,(*(q)).sex,(*(q)).age,q->score,q->add);
		q=q->adv;}
		else {printf("%s %s %c %d %s %s\n",head->id,head->name,(*(head)).sex,(*(head)).age,head->score,head->add);break;}
	}
}





