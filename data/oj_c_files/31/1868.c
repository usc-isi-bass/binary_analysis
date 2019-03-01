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
	char str[100];
	struct student *next;
};
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	p1=(struct student*)malloc(len);
    gets(p1->str);
	if(strcmp(p1->str,"end")==0)
	{
		free(p1);
		head=NULL;
		return head;
	}
	else
	{
    	p1->next=NULL;
		head=p1;
		p2=p1;
		do
		{
			p1=(struct student*)malloc(len);
			gets(p1->str);
			if(strcmp(p1->str,"end")==0)
			{
				free(p1);
				break;
			}
			else
			{
		    	p1->next=NULL;
				p1->next=p2;
				p2=p1;
				head=p1;
			}
		}
		while(1);
		return head;
	}
}
int main()
{
	struct student *p,*pa;
	pa=creat();
	p=pa;
	do
	{
		printf("%s\n",p->str);
		p=p->next;
	}
	while(p!=NULL);
	return 0;
}