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

struct stu{
	int a;
	int b;
	int c;
	struct stu *next;
};
void main()
{
	int n,i,j,max;
	struct stu *head,*p1,*p2;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		if(i==0)
		{
			head=p1=p2=(struct stu*)malloc(sizeof(struct stu));
			scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
			head=p1;
			p2=p1;
		}
		else 
		{
			p1=(struct stu*)malloc(sizeof(struct stu));
			scanf("%d %d %d",&p1->a,&p1->b,&p1->c);
			p2->next=p1;
			p2=p1;
		}
	}
	p2->next=NULL;
	
	for(j=0;j<3;j++)
	{
		max=0;
		p1=head;
		for(i=0;p1->next!=NULL;i++)
		{
			if(p1->b+p1->c>max)max=p1->b+p1->c;
			p1=p1->next;
		}
		p1=head;
		for(i=0;p1->next!=NULL;i++)
		{
			if(p1->b+p1->c==max)
			{
				printf("%d %d\n",p1->a,max);
				p1->b=0;
				p1->c=0;
				p1=p1->next;
				break;
			}
			else p1=p1->next;
		}
	}
}
