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
		char imfor[100];
	};

	int n=1,m;
	struct student *p1,*p3[600];
	p1=p3[0]=(struct student *)malloc(sizeof(struct student));
	gets(p1->imfor);
	while (p1->imfor[0]!='e')
	{
		p1=(struct student * )malloc(sizeof(struct student));
		p3[n]=p1;
		n++;
		gets(p1->imfor);
	}
	for (m=n-2;m>=0;m--)
	{
		printf("%s\n",p3[m]->imfor);
	}
}