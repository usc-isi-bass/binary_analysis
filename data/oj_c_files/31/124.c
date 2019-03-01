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
int main()
{
	struct student *p,*pnew,*head,*p1;
	pnew=(struct student *)malloc(sizeof(struct student));
	gets(pnew->str);
	pnew->next=NULL;
	if(strcmp(pnew->str,"end")==0)
	{
		free(pnew);
		head=NULL;
	}
	else
	{
		head=pnew;
		p=pnew;
	while(1)
	{
		pnew=(struct student *)malloc(sizeof(struct student));
		gets(pnew->str);
		pnew->next=NULL;
		if(strcmp(pnew->str,"end")==0)
		{
			free(pnew);
			break;
		}
		else
		{
			head=pnew;
			pnew->next=p;
			p=pnew;
		}
	}
	}
	p1=head;
	while(p1)
	{
		printf("%s\n",p1->str);
		p1=p1->next;
	}
	return 0;
}