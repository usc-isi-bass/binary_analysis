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

struct link
{
	char s[100];
	struct link *next;
	struct link *last;
} ;
struct link *create()
{
	struct link *last,*head,*p;
	char s[100];
	head=(struct link*)malloc(LEN);
	last=head;
	do
	{
		gets(s);
		if (strlen(s)==3) break;
		p=(struct link*)malloc(LEN);
		strcpy(p->s,s);
		last->next=p;
		p->last=last;
		last=p;
	}
	while (0==0);
	last->next=NULL;
	head=head->next;
	head->last=NULL;
	return head;
}
void nprint(struct link *p)
{
	struct link *last;
	while (p!=NULL)
	{
		last=p;
		p=p->next; 
	}
	p=last;
	while (p!=NULL)
	{
		puts(p->s);
		p=p->last;
	}
} 
int main()
{
	struct link *p;
	p=create();
	nprint(p);
} 