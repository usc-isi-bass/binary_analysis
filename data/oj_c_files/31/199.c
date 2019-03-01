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

struct stu
{
	char num[1000];
	struct stu *pre;
}*phead,*p1,*p2,*pend;
void print(void)
{
	struct stu *p;
	for(p=pend;p!=phead;)
	{
		puts(p->num);
		p=p->pre;
	}
	puts(p->num);
}

main()
{
	for(p1=p2=phead=(struct stu*)malloc(sizeof(struct stu));;)
	{
		gets(p1->num);
		if(p1->num[0]=='e')
		{
			pend=p1->pre;
			break;
		}
		p1=(struct stu*)malloc(sizeof(struct stu));
		p1->pre=p2;
		p2=p1;
	}
	print();
}