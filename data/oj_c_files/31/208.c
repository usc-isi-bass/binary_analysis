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
	char locate[100];
	struct student *next;
	struct student *last;
};
int n;
char u[100];
struct student *creat(void)
{
struct student *head;
struct student *p1,*p2;
n=0;
p1=p2=(struct student*)malloc(LEN);
gets(p1->locate);
strcpy(u,p1->locate);
head=NULL;
while(strcmp(p1->locate,"end")!=0)
{n=n+1;
if(n==1){head=p1;}
else {p2->next=p1;p1->last=p2;}
p2=p1;
p1=(struct student*)malloc(LEN);
gets(p1->locate);
}
p1->last=p2;
p2->next=NULL;
return(p2);
}
void main()
{   
	struct student *creat(void);
	struct student *p;
	p=creat();
	do
	{printf("%s\n",p->locate);
	p=p->last;
	}while(strcmp(p->locate,u)!=0);
	printf("%s",p->locate);
}
