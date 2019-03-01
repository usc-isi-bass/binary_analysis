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

struct Student
{
	char r[200];
	struct Student *next,*up;
};
int main()
{
	struct Student *p,*h,*pre;
	h=NULL;
	while (1)
	{
		p=malloc(L);
		if (h==NULL) 
		{
			h=p;
			p->up=h;
		}
		else 
		{
			pre->next=p;
			p->up=pre;
		}
		gets(p->r);
		if (strcmp(p->r,"end")==0) break;
		//scanf("\n");
		pre=p;
	}
	p=pre;
	while (1)
	{
		printf("%s",p->r);
		if (p==h) break;
		else printf("\n");
		p=p->up;
	}
	return 0;
}