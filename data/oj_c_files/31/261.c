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
    char input[500];
	struct student *next;
};


void main()
{
	char c[500];
	struct student *head;
	struct student *p1,*p;
	head=NULL;
	while(strcmp(gets(c),"end")!=0)
	{
		p1=(struct student *)malloc(LEN);
		strcpy(p1->input,c);
		p1->next=head;
		head=p1;
	}
	p=head;
		do
		{
			puts(p->input);
			p=p->next;
			putchar('\n');
		}while(p!=NULL);
}

