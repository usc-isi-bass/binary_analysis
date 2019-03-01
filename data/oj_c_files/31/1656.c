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
	struct student *p;
};
void main()
{
	int m,n,i,j;
	struct student *p,*head;
    for(i=0;;i++)
	{
		p=DT;
		if(i==0)
		  p->p=NULL;
		gets(p->info);
		if(strcmp(p->info,"end")==0)
			break;
		p->p=head;
		head=p;
	}
    for(p=head,j=0;j<i;j++,p=p->p)
	{
		puts(p->info);
	}
}


