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

struct bin
{
	char ID[10];
	int age;
	struct bin *next;
};
void main()
{
	struct bin *head,*p,*p1,*p2,*p3;
	int m,n,i,j,k;
	scanf("%d",&n);
	p=(struct bin*)malloc(sizeof(struct bin));
	scanf("%s%d",&p->ID,&p->age);
	head=p3=p;
	p->next=0;
	for(i=1;i<n;i++)
	{
		p=(struct bin*)malloc(sizeof(struct bin));
	    scanf("%s%d",&p->ID,&p->age);
		if(p->age<60)
		{
			p3->next=p;
			p->next=0;
			p3=p;
		}
		else
		{
			if(p->age>head->age)
			{
				p->next=head;
				head=p;
			}
			else if(p->age<=p3->age)
			{
			    p3->next=p;
			    p->next=0;
			    p3=p;
			}
			else
			{
				p1=head;
				p2=p1->next;
				while(p2->age>=p->age)
				{
					p1=p1->next;
					p2=p2->next;
				}
				p1->next=p;
				p->next=p2;
			}
		}
	}
	for(;head!=0;head=head->next)
	{
		printf("%s\n",head->ID);
	}
}