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
	struct student *pre;
	char mess[500];
};
void main()
{
	int n=0;
	struct student *p1,*p2,*p;
	p1=(struct student *)malloc(LEN);
	while(strcmp(gets(p1->mess),"end")!=0)
	{
		n=n+1;
		if(n==1) 
			p1->pre=NULL;
		else
			p1->pre=p2;
			p2=p1;
			p1=(struct student *)malloc(LEN);
	}
	p=p2;
	do
	{
		printf("%s\n",p->mess);
		p=p->pre;
	}while(p!=NULL);

}
