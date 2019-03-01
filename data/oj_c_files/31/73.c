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
	char info[50];
	struct student *pre;
	struct student *next;
};

void main()
{
	int i=0,n=0;
	struct student *p,*head,*p0;
	p=head=(struct student *)malloc(sizeof(struct student));
	while(strcmp((gets((*p).info)),"end")!=0)
	{
		n+=1;
		p0=p;
		p=(*p).next=(struct student *)malloc(sizeof(struct student));
		(*p).pre=p0;
	}

	while(i++<n)
	{
		p=(*p).pre;
		printf("%s\n",(*p).info);
	}
}