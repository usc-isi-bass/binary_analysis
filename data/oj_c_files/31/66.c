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
	char str[1000];
	struct student *next;
};

struct student *create(void)
{
	struct student *head;
	struct student *p1,*p,*p2;
	head=p1=(struct student *)malloc(len);
 	gets(p1->str);
	p1->next=0;
	p2=p1;
	while(strcmp(p1->str,"end")!=0)
	{
		p=head;
		head=p1;
		head->next=p;
		p1=(struct student *)malloc(len);
		gets(p1->str);
	}
	p2->next=0;
	return(head);
}

void print(struct student *head)
{
	struct student *p1;
	p1=head;
	if(head!=0)
		do
		{
			puts(p1->str);
			p1=p1->next;
		}while(p1!=0);
}

void main()
{
	struct student *head;
	head=create();
	print(head);
}





