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

void main()
{
	struct number
	{
		int num;
		struct number * next;
	};
	struct number * head=0,* p;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=(struct number *)malloc(sizeof(struct number));
		scanf("%d",&p->num);
		if(i==1)p->next=0;
		else p->next=head;
		head=p;
	}
	if(head!=0)
	{
		for(i=1;i<=n;i++)
		{
			printf("%d",p->num);
			if(i<n)printf(" ");
			else printf("\n");
			p=p->next;
		}
	}
}