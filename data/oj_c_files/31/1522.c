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
	char a[100];
	struct student *next;
};
int n;

void main()
{
	struct student *head;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(L);
	gets(p1->a);
	head=NULL;
	while(strcmp(p1->a,"end")!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(L);
		gets(p1->a);
	}
	p2->next=NULL;
	int i,k;
	struct student *j;
	j=head;
	for(k=n-1;k>-1;k--)
	{
		for(i=0;i<k;i++)
			j=j->next;
		puts(j->a);
		j=head;
	}
}
