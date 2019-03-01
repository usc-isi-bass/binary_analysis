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
	char a[60];
	struct student*next; 
};
void main()
{
	struct student *creat(void);
	struct student *p;
	p=creat();
	for(;p!=NULL;)
	{
		puts(p->a);
		p=p->next;
	}
}
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	int n=0;
	p1=p2=(struct student *)malloc(LEN);
	gets(p1->a);
	for(;;)
	{
		n=n+1;
		if(n==1)p2->next=NULL;
		else p1->next=p2;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		gets(p1->a);
		if(p1->a[0]=='e')
		{head=p2;
	return (head);}
	}

}