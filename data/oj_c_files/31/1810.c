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

void main()
{
	struct student
	{
	char a[100];
	struct student * next;
	};
	struct student * head;
	struct student * p1,* p2;
	p1=p2=(struct student * )malloc(LEN);
	gets(p1->a);
	p1->next=0;
	while(strcmp(p1->a,"end"))
	{
		head=p1;
		p2=p1;
		p1=(struct student * )malloc(LEN);
		gets(p1->a);
		p1->next=p2;
	}
	for(p1=head;p1!=0;p1=p1->next)
		printf("%s\n",p1->a);	
}