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


struct st
{
	char id[10000];
	struct st *next;
};

int main()
{
	struct st *head=NULL,*p=NULL,*q=NULL;
	char end;
	while (1)
	{
		p=(struct st*)malloc(sizeof(struct st));
		if(p!=NULL)
		{
			gets(p->id);
			p->next=q;
			if (p->id[0]=='e')
				break;
			else
			q=p;

		}
	}

	p=p->next;
	while(1)
	{
		puts(p->id);
		if (p->next==NULL)
			break;
		p=p->next;


	}

}		