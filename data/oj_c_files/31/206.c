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
	struct student *last;
};
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	p1=(struct student *)malloc(sizeof(struct student));
	gets(p1->a);
	p1->last=NULL;
	int i;
	for(i=1;strcmp(p1->a,"end")!=0;i++)
	{
		if(i==1);
		else {p2->next=p1;p1->last=p2;}
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		gets(p1->a);
	}
	p2->next=NULL;head=p2;
	return(head);
}
main()
{
	struct student *head,*p;
	head=creat();
	p=head;
	int i;
	for(i=0;p->last!=NULL;i++)
	{
		printf("%s\n",p->a);
		p=p->last;
	}
	printf("%s",p->a);
}