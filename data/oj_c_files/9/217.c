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


struct man
{
	char id[20];
	int a;
	struct man *next;
}*p,*head,*q;



void main()
{

    struct man * insert(struct man *head,struct man *ill);
	int n,i;
	scanf("%d",&n);
	head=NULL;
	for(i=0;i<n;i++)
	{
		p=(struct man*)malloc(LEN);
		scanf("%s %d",p->id,&p->a);
		head=insert(head,p);
	}

	q=head;
    while(q!=NULL)
	{
		printf("%s\n",q->id);
		q=q->next;
	}
}


struct man * insert(struct man *head,struct man *ill)
{
	struct man *p0,*p1,*p2;
	p1=head;
	p0=ill;
	if(head==NULL)
	{
		head=p0;
		p0->next=NULL;
	}
	else
	{
	  if(p0->a<60)
	  {
			while(p1->next!=NULL)
			{
				p2=p1;
				p1=p1->next;
			}
			p1->next=p0;
			p0->next=NULL;
	  }

	  else if(p0->a>=60)
	  {
		while((p0->a<=p1->a)&&(p1->next!=NULL))
		{
			p2=p1;
			p1=p1->next;
		}
		if(p0->a>p1->a)
		{
			if(head==p1)
				head=p0;
			else
				p2->next=p0;
			p0->next=p1;}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
		
	  }
	
	}
	return(head);
}
