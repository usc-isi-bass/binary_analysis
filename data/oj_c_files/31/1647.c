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
	char inf[200];
	struct student *next;
};
int n;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=(struct student *)malloc(LEN);
	p2=p1;
	gets(p1->inf);
	head=NULL;
	do
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		gets(p1->inf);
	}
	while(strcmp((p1->inf),"end")!=0);
	p2->next=NULL;
	return(head);
}
int main()
{
	struct student *r,*headr;
	r=creat();
	headr=r;
	r=r->next;
	for(;r!=headr;)
	{
		for(r=headr;r->next!=NULL;)r=r->next;
		printf("%s\n",r->inf);
		for(r=headr;(r->next)->next!=NULL;)r=r->next;
		r->next=NULL;
	}
	printf("%s",headr->inf);
}