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
	char a[20];
	char b[40];
	char c;
	int d;
	float e;
	char f[20];
	struct student*before;
};
int n;
struct student* hh()
{
	struct student*p1,*p2,*head;n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s ",&p1->a);head=NULL;
	while(strcmp(p1->a,"end"))
	{
		scanf("%s %c %d %f %s ",&p1->b,&p1->c,&p1->d,&p1->e,&p1->f);
		n=n+1;
		if(n==1)
			p1->before=NULL;
		else p1->before=p2;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s ",&p1->a);
	};
	head=p2;
	return(head);
}
void main()
{
	struct student*p;
	p=hh();
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->a,p->b,p->c,p->d,p->e,p->f);
		p=p->before;
	};
}