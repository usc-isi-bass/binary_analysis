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


int main()
{
	struct student
	{
		char No[9];
		char name[20];
		char sex;
		int age;
		char score[8];
		char add[20];
		struct student *next,*last;
	};
	struct student *p,*head,*tail;
	p=(struct student*)malloc(sizeof(struct student));
	head=p;
	head->last=NULL;
	do
	{
		scanf("%s",p->No);
		if(p->No[0]=='e')
		{
			p->next=NULL;
			tail=p->last;
		}
		else
		{
			scanf("%s %c%d%s%s",p->name,&p->sex,&p->age,&p->score,p->add);
			p->next=(struct student*)malloc(sizeof(struct student));
			p->next->last=p;
		}
		p=p->next;
	}while(p!=NULL);
	p=tail;
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->No,p->name,p->sex,p->age,p->score,p->add);
		p=p->last;
	}
	return 0;
}
