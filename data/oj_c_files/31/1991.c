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

int main()
{
	struct student
	{
		char a[100];
		struct student *back;
	};

	int n;
	struct student *p1,*p2,*end;
	p1=p2=(struct student *)malloc(sizeof(struct student));
	gets(p1->a);
	p1->back=0;
	for (n=1;;n++)
	{
		p1=(struct student * )malloc(sizeof(struct student));
		p1->back=p2;
		p2=p1;
		gets(p1->a);
		if (p1->a[0]=='e')
		{
			end=p1->back;
			break;
		}

	}
	struct student *p;
	p=end;
	for (n=1;;n++)
	{
		printf("%s\n",p->a);
		p=p->back;
		if (p==0)break;
	}
	return 0;
}