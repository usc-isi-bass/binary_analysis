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


struct node
{
	int num;
	struct node *next;
};

void main()
{
	int m,n,i,t;
	struct node *head=NULL, *p, *last=NULL;
	scanf("%d%d",&n,&m);
	head=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&head->num);
	head->next=head;
	last=head;
	for(i=1;i<n;i++)
	{
		scanf("%d",&t);
		p=(struct node*)malloc(sizeof(struct node));
		p->num=t;
		last->next=p;
		p->next=head;
		last=p;
	}
	for(i=0;i<n-m%n;i++)
		head=head->next;
	printf("%d",head->num);
	for(i=1;i<n;i++)
	{
		head=head->next;
		printf(" %d",head->num);
	}
}
