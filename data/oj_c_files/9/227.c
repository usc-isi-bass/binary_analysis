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

struct people
{
	char num[10];
	int age;
	struct people *next;
};
void main()
{
	struct people *head,*p0,*p,*s;
	head=(struct people *)malloc(sizeof(struct people));
	head->next=NULL;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p0=head;
		p=p0->next;
		s=(struct people *)malloc(sizeof(struct people));
		s->next=NULL;
		scanf("%s %d",s->num,&s->age);
		while(p!=NULL&&((s->age>=60&&s->age<=p->age)||s->age<60))
		{
			p0=p;
			p=p->next;
		}
		p0->next=s;
		s->next=p;
	}
	p=head->next;
	while(p!=NULL)
	{
		printf("%s\n",p->num);
		p=p->next;
	}
}