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
	char a[200];
	
	struct student *next;
};

struct student *creat ()
{
	struct student *p1,*p2,*head;
	int n=0;
	p1=(struct student*)malloc(sizeof (struct student));
	gets(p1->a);
	p2=p1;
	head=NULL;
	
	while(strcmp(p1->a,"end")!=0)
	{
		n=n+1;
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(sizeof (struct student));
		gets(p1->a);
		
	}
	p2->next=NULL;
	
	return(head);
}
void main()
{
	struct student *p,*head,*q;
	head=creat();
	p=head;
	while(1)
	{
		if(p->next!=NULL){q=p;p=p->next;}
	
	if(p->next==NULL&&q!=head)
			{
				printf("%s\n",p->a);
				q->next=NULL;p=head;
			}
			if(p->next==NULL&&q==head)
			{
				printf("%s\n",p->a);
				printf("%s",q->a);break;
			}
	}
	
}




