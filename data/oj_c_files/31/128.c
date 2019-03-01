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


struct xinxi
{
	char stu[1000];
	struct xinxi *next;
};
void main()
{
	struct xinxi *head,*p,*pt;
	int i,n;

	p=(struct xinxi *)malloc(sizeof(struct xinxi));
	gets(p->stu);
	pt=p;
	head=(struct xinxi *)malloc(sizeof(struct xinxi));
	n=0;
	while(strcmp(p->stu,"end")!=0)
	{   n=n+1;
		if(n==1)head->next=p;
		if(n>1)pt->next=p;

		pt=p;
		p=(struct xinxi *)malloc(sizeof(struct xinxi));
		n=n+1;
        gets(p->stu);
	}
	pt->next=NULL;

while(head->next!=NULL)
	{	pt=head;
	p=head->next;
	while(p->next!=NULL)
	{p=p->next;
	pt=pt->next;}

	puts(p->stu);
	pt->next=NULL;
	}
}
