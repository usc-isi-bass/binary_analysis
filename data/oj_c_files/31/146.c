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
char all[100];
struct student *next;
};


struct student *creat(void)
{
struct student *head;
struct student *p,*q;
int t=0;
	
head=(struct student*) malloc (sizeof (struct student));
gets(head->all);
q=head;
head->next=NULL;

do 
{
	if(t>0)
		{
		p->next=q;
		q=p;
		}

p=(struct student*) malloc (sizeof (struct student));
gets(p->all);
t++;
}while(strcmp(p->all,"end")!=0);

return(q);

}

void print(struct student *head)
{
struct student *p;
p=head;

do 
{
printf("%s\n",p->all);
p=p->next;
}while (p!=NULL);

}

void main()
{
struct student *headnew;

headnew=creat();

print(headnew);

}
