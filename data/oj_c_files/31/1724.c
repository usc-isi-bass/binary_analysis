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
	char inf[200];
	struct student *prev;
};
struct student *creat()
{
	struct student *p1,*p2,*head;
	p1=p2=(struct student *)malloc(sizeof(struct student));
	gets(p1->inf);
	p1->prev=0;
	while(p1->inf[0]!='e')
	{
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		gets(p1->inf);
		p1->prev=p2;
	}
	return(p2);
}
void print_f(struct student *head)
{
	struct student *p1;
	p1=head;
	while(p1!=0)
	{
		printf("%s\n",p1->inf);
		p1=p1->prev;
	}
}
void main()
{
	print_f(creat());
}