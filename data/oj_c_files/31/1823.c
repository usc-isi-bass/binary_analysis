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
	char a[100];
	struct stu *prev;
	struct stu *next;
};
void main()
{
	struct stu *end,*p1,*p2,*head;
	int m,n,j;
	p1=(struct stu*)malloc(sizeof(struct stu));
	end=p1;
	p2=p1;
	gets(p1->a);
	p1->next=0;
	scanf("\n");
	for(;;)
	{
		p1=(struct stu*)malloc(sizeof(struct stu));
		gets(p1->a);
		scanf("\n");
		if(strcmp(p1->a,"end")==0)
		{
			head=p2;
			break;
		}
		else
		{
			p1->next=p2;
			p2=p1;
		}
	}
	for(;head!=0;head=head->next)
	{
		puts(head->a);
	}
}
