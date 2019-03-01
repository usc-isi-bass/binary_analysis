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
{int xuehao,yuwen,shuxue,sum;
struct stu *next;
};
void max(struct stu *h)
{
	struct stu *a,*b,*c,*d;
	int m=0;
	a=h;
	do
	{
		c=a;
		a=a->next;
		if(m<a->sum)
		{
			m=a->sum;
			d=c;
			b=a;
		}
		}while(a->next);
		printf("%d %d\n",b->xuehao,b->sum);
		d->next=b->next;
		free(b);
}

void main()
{
	struct stu *head,*p,*q;
	int n,i;
	scanf("%d",&n);
	head=M;
	p=M;
	head->next=p;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&p->xuehao,&p->yuwen,&p->shuxue);
		p->sum=p->yuwen+p->shuxue;
	    q=M;
		p->next=q;
		p=q;
	}
	p->next=NULL;
	max(head);
	max(head);
	max(head);
}
