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

int n,i,max=0,d,t=0;
struct stu 
{
	int id;
	int chi;
	int ma;
	struct stu *next;
} *p1,*p2;

struct stu *creat(void)
{
	struct stu *head;
	scanf("%d",&n);
	p2=p1=(struct stu *)malloc(sizeof(struct stu));
	for(i=0;i<n;i++)
	{		
		scanf("%d %d %d",&p1->id,&p1->chi,&p1->ma);
		if(i==0) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct stu *)malloc(sizeof(struct stu));
	}
	p2->next=NULL;
	return (head);
}

void find (struct stu *head)
{
	while(t<3)
	{
	p1=head;
	for(i=0;i<n;i++)
	{
		if(p1->chi+p1->ma>max) 
		{
			max=p1->chi+p1->ma;
			d=p1->id;
		}
		p1=p1->next;
	}
	printf("%d %d\n",d,max);
	t=t+1;	max=0;
	p1=head;
	for(i=0;i<n;i++)
	{
		if(p1->id==d) 
		{
			p1->chi=0;
			p1->ma=0;
		}
		p1=p1->next;
	}
	}
}

void main()
{
	struct stu *head;
	head=creat();
	find(head);
}


			


	


