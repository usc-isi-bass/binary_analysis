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
{char a[50];
struct student *prev;
};
void main()
{
	void print(struct student *head);
	int n=0;
	struct student *head;
	struct student *p1,*p2;
	p1=head=(struct student *)malloc(len);/*???????*/
	gets(p1->a);
	p2=NULL;
	while(strcmp(p1->a,"end")!=0)
	{
		n++;
		if(n==1)
			p2=p1;
		else
			p1->prev=head;
		head=p1;
		p1=(struct student *)malloc(len);
		gets(p1->a);
	}
	p2->prev=NULL;
	print(head);
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	if(head!=NULL)
		do
		{
			printf("%s\n",p->a);
			p=p->prev;
		}
		while(p!=NULL);
}
