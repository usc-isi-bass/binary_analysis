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
	int a;
	struct node *next;
};
void main()
{
	struct node *head;
	struct node *p1,*p2;
	int i;
	int n,m;
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(n==0) 
			break;
		head=(struct node *)malloc(sizeof(struct node));
		p1=head;
		p1->a=1;
		for(i=2;i<=n;i++)
		{
			p2=(struct node *)malloc(sizeof(struct node));
			p2->a=i;
			p1->next=p2;
			p1=p2;
		}
		p1->next=head;
		while(p1->next!=p1)
		{
			for(i=1;i<m;i++)
				p1=p1->next;
			p1->next=p1->next->next;
		}
		printf("%d\n",p1->a);
	}

}