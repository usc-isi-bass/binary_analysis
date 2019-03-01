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
	char inf[50];
	struct student *next;
};
int main()
{
	struct student *head,*p;
	p=(struct student*)malloc(LEN);
	gets(p->inf);
	head=NULL;
	while (p->inf[0]!='e')
	{
		p->next=head;
		head=p;
		p=(struct student*)malloc(LEN);
		gets(p->inf);
	}
	p=head;
	while(true)
	{
	printf("%s",p->inf);
	p=p->next;
	if (p==NULL)  break;
	else printf("\n");
	}
	return 0;
}
