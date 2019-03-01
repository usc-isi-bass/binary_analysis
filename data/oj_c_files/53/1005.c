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

int n;
struct num
{
	int shu;
	struct num *next;
};
struct num *creat()
{
	struct num *p1,*p2,*head;
	p2=p1=(struct num*)malloc(LEN);
	scanf("%d",&p1->shu);
	p1->next=NULL;
	head=p1;
	n=n-1;
	while(n)
	{
		p1=(struct num*)malloc(LEN);
		scanf("%d",&p1->shu);
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
		n--;
	}
	return head;
}
void main()
{
	scanf("%d",&n);
	struct num *head,*p,*q,*qpre;
	head=creat();
	for(p=head;p!=NULL;p=p->next)
		for(q=p->next,qpre=p;q!=NULL;)
		{
			if(q->shu==p->shu)
			{
				qpre->next =q->next;
				q=qpre->next ;
			}
			else
			{
				qpre=q;
				q=q->next;
			}
		}
	printf("%d",head->shu);
    for(p=head->next;p!=NULL;p=p->next)
	    printf(",%d",p->shu);
}