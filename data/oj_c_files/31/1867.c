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
	char str[100];
	struct student *next;
};
int n;
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	p1=p2=(struct student *)malloc(LEN);
	gets(p1->str);
	p1->next=NULL;
	p2=p1;
	while(strcmp(p2->str,"end")!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else {head=p2;p1=p2;}
		p2=(struct student *)malloc(LEN);
		p2->next=p1;
		gets(p2->str);
	}
	return(head);
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=NULL)
		while(p->next!=NULL)
		{
			puts(p->str);
			p=p->next;
		}
		puts(p->str);
}
void main()
{
	struct student *ip;
	ip=creat();
	print(ip);
}