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
};

struct student *create()
{
	struct student *p1,*p2;

	p1=(struct student*)malloc(len);
	gets(p1->a);
	p1->next=NULL;

	p2=p1;
	for(;;)
	{
		p1=(struct student*)malloc(len);
		gets(p1->a);
		if(strcmp(p1->a,"end")==0) 
		{
			free(p1);
			break;
		}
		p1->next=p2;
		p2=p1;
	}
	return p2;
}

void main()
{
	struct student *head,*p1;
	struct student *create();
	head=create();
	p1=head;
	while(p1)
	{
		printf("%s\n",p1->a);
		p1=p1->next;
	}
}

