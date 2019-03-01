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

struct stu
{
	char id[500];
	struct stu *next;
	struct stu *pre;
};
void main()
{
    int n;
	struct stu *p1,*p2,*head,*tail,*p;
	n=0;
	p1=p2=(struct stu*)malloc(sizeof(struct stu));
	gets(p1->id);
	while(strcmp(p1->id,"end")!=0)
	{
		n=n+1;
		if(n==1)
		{	
			head=p1;
			p1->pre=NULL;
		}
		else
		{
			p2->next=p1;
			p1->pre=p2;
		}
		p2=p1;
		p1=(struct stu*)malloc(sizeof(struct stu));
		gets(p1->id);
	}
	p2->next=NULL;
	tail=p2;
	p=tail;
	do
	{
		printf("%s\n",p->id);
		p=p->pre;
	}while(p!=NULL);
}