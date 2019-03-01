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
	struct student *next;
};

int main()
{
	struct student *p1,*p2;
	p1=(struct student*)malloc(len);
	p1->next=NULL;
	gets(p1->a);
	while((strcmp(p1->a,"end"))!=0)
	{
		p2=p1;
		p1=(struct student*)malloc(len);
		p1->next=p2;
		gets(p1->a);
	}
	p1=p1->next;
	while(p1!=NULL)
	{
		printf("%s\n",p1->a);
		p1=p1->next;
	}
	return 0;
}