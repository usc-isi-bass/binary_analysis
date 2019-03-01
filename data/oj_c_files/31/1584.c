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
	struct student * next;
}*p1,*p2,*head;

int main()
{
	int n=0;
	p1=p2=(struct student *)malloc(Len);
	gets(p1->a);
	p2->next=NULL;
	while(1)
	{
		p1=(struct student *)malloc(Len);
		gets(p1->a);
		p1->next=p2;
		if(strcmp(p1->a,"end")==0)
		{
			head=p1->next;
			break;
		}
		else
		{
			p2=p1;
		}

	}
	p1=head;
	while(p1)
	{
		printf("%s\n",p1->a);
		p1=p1->next;
	}

	
}