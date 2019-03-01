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
	char inf[50];
	struct stu *next;
};

struct stu *head,*p1,*p2;
int output(struct stu *point);
int main()
{

	p1=(struct stu *)malloc(sizeof(struct stu));
	head=p1;
	while(gets((*p1).inf)!=NULL)
	{
		p2=(struct stu *)malloc(sizeof(struct stu));
		(*p1).next=p2;
		p1=p2;
	}
	(*p1).next=NULL;
	output(head);
	return 0;
}

int output(struct stu *point)
{
	if(strcmp(point->next->inf,"end")!=0)
		output(point->next);
	puts((*point).inf);
	return 0;
}