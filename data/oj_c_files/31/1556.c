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

struct num
{
	char content[50];
	struct num *next;
};

struct num *crea()
{
	long i;
	struct num *head;
	struct num *p1,*p2;
	p1=p2=(struct num *)malloc(LEN);
	head=p1;
	gets(p1->content);
	head->next=NULL;
	for(;;)
    { 
		p1=(struct num *)malloc(LEN);
		gets(p1->content);
		if(p1->content[0]!='e')
		{
			p1->next=p2;
			p2=p1;
		}
		else  {p1->next=p2,p2=p1;break;}
	}
   return(p1);
}
int main()
{
long nx,m,m0,tx,qx,q,mxh;
struct num *hi,*p,*t;
hi=crea();
t=hi->next;
for(p=t;p!=NULL;p=p->next)
printf("%s\n",p->content);
return 0;
}