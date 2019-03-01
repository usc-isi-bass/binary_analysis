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
	char a[1000];
	struct student *next;
};
void main()
{
	struct student *head,*p1,*p2;
	p1=head=(struct student*)malloc(LEN);
//	scanf("%s %s %c %d %d %s",p1->num,p1->name,&p1->sex,&p1->age,
//			&p1->score,p1->addr);
	p1->next=NULL;
	gets(p1->a);
	while(strcmp(p1->a,"end"))
	{
		p2=(struct student*)malloc(LEN);
		p2->next=p1;
	    p1=p2;
		gets(p1->a);
	}
	while(p1->next!=NULL)
	{
		p1=p1->next;
		printf("%s\n",p1->a);
	}
}