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
	char a[80];
	struct student *pro;
};

struct student *creat()
{
	struct student *end,*p1,*p2;
	p2=(struct student *)malloc(sizeof(struct student));
	gets(p2->a);
	p2->pro=NULL;
	p1=p2;
	do
	{
		p2=(struct student *)malloc(sizeof(struct student));
		gets(p2->a);
		if (strcmp(p2->a,"end")==0) 
		{
			free(p2);
			break;
		}
		else
		{
			p2->pro=p1;
			p1=p2;
			end=p2;
		}		
	}
	while(1);
	return(end);
}

void main()
{
	struct student *creat();
	void destroy(struct student *end);
	struct student *end,*p;
	end=creat();
	p=end;
	do
	{
		puts(p->a);
		p=p->pro;
	}
	while (p);
	
}
