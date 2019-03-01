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

struct stu
{
	int num;
	int chinese;
	int math;
	int sum;
	struct stu *next;
};

void main()
{
	void max(struct stu*);
	int n,i;
	struct stu *p,*q,*head;
	scanf("%d\n",&n);
	head=(struct stu*)malloc(sizeof(struct stu));
	p=(struct stu*)malloc(sizeof(struct stu));
	head->next=p;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&p->num,&p->chinese,&p->math);
		p->sum=p->chinese+p->math;
		q=(struct stu*)malloc(sizeof(struct stu));
		p->next=q;
		p=q;
	}
	p->next=NULL;
	max(head);
	max(head);
	max(head);
}

void max(struct stu*head)
{
	struct stu *p,*k,*r,*q;
	int max=0;
	p=head;
	while(p->next!=NULL)
	{
		r=p;
		p=p->next;
		if(p->sum>max)  max=p->sum,k=r,q=p;
	}
	printf("%d %d\n",q->num,q->sum);
	k->next=q->next;
	free(q);
}
