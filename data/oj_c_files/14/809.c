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
	int num;
	int yu;
	int shu;
	int he;
	struct student *next;
};

struct student *create(int n)
{
	struct student *head,*p1,*p2;
	int i;

	p1=(struct student*)malloc(len);
	scanf("%d %d %d",&p1->num,&p1->yu,&p1->shu);
	p1->he=p1->yu+p1->shu;
	p1->next=NULL;

	head=p1;
	p2=p1;
	for(i=1;i<=n-1;i++)
	{
		p1=(struct student*)malloc(len);
		scanf("%d %d %d",&p1->num,&p1->yu,&p1->shu);
		p1->he=p1->yu+p1->shu;
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return head;
}

struct student *max(struct student *head)
{
	struct student *p,*m;
	m=head;
	p=head->next;
	while(p)
	{
		if(p->he>m->he) m=p;
		p=p->next;
	}
	return m;
}

void main()
{
	int n,i;
	struct student *head,*m;
	struct student *create(int n);
	struct student *max(struct student *head);
	scanf("%d",&n);
	head=create(n);
	for(i=1;i<=3;i++)
	{
		m=max(head);
		printf("%d %d\n",m->num,m->he);
		m->he=-1;
	}
}

