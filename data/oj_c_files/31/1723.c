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
	char xuehao[200];
	struct student *next;
};
struct student *create(n)
{
	struct student *p1,*p2,*head;
	p1=p2=(struct student*)malloc(sizeof(struct student));
	p1->next=0;
	gets(p1->xuehao);
	while(p1->xuehao[0]!='e')
	{
		p2=p1;
		p1=(struct student*)malloc(sizeof(struct student));
		p1->next=p2;
		gets(p1->xuehao);
	}
	head=p2;
	return(head);
}
int main()
{
	struct student *p1;
	int n;
	p1=create(n);
	while(p1!=0)
	{
		printf("%s\n",p1->xuehao);
		p1=p1->next;
	}
}

